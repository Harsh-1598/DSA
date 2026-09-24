import os
import re
import requests

LEETCODE_SESSION = os.environ["LEETCODE_SESSION"]
CSRF_TOKEN = os.environ["LEETCODE_CSRF_TOKEN"]
OUTPUT_DIR = "leetcode questions"

HEADERS = {
    "Content-Type": "application/json",
    "Cookie": f"LEETCODE_SESSION={LEETCODE_SESSION}; csrftoken={CSRF_TOKEN};",
    "x-csrftoken": CSRF_TOKEN,
    "Referer": "https://leetcode.com",
}

EXT_MAP = {
    "cpp": "cpp", "python3": "py", "python": "py", "java": "java",
    "javascript": "js", "typescript": "ts", "c": "c", "csharp": "cs",
    "go": "go", "rust": "rs", "kotlin": "kt", "swift": "swift",
}


def get_recent_accepted_submissions(limit=20):
    query = """
    query recentAcSubmissions($username: String!, $limit: Int!) {
      recentAcSubmissionList(username: $username, limit: $limit) {
        id
        title
        titleSlug
        timestamp
      }
    }
    """
    # Fetch username from session first
    profile_query = "query { userStatus { username } }"
    resp = requests.post(
        "https://leetcode.com/graphql",
        json={"query": profile_query},
        headers=HEADERS,
    )
    username = resp.json()["data"]["userStatus"]["username"]

    resp = requests.post(
        "https://leetcode.com/graphql",
        json={"query": query, "variables": {"username": username, "limit": limit}},
        headers=HEADERS,
    )
    return resp.json()["data"]["recentAcSubmissionList"]


def get_submission_code(title_slug):
    query = """
    query submissionDetails($titleSlug: String!) {
      question(titleSlug: $titleSlug) {
        questionId
      }
    }
    """
    resp = requests.post(
        "https://leetcode.com/graphql",
        json={"query": query, "variables": {"titleSlug": title_slug}},
        headers=HEADERS,
    )

    # Get the submission list for this problem to find the latest accepted one
    sub_list_url = f"https://leetcode.com/api/submissions/{title_slug}/"
    resp = requests.get(sub_list_url, headers=HEADERS)
    data = resp.json()
    submissions = data.get("submissions_dump", [])

    for sub in submissions:
        if sub.get("status_display") == "Accepted":
            return sub.get("code", ""), sub.get("lang", "cpp")
    return None, None


def sanitize_filename(name):
    return re.sub(r'[^a-zA-Z0-9_\- ]', '', name).strip().replace(" ", "-")


def main():
    os.makedirs(OUTPUT_DIR, exist_ok=True)
    submissions = get_recent_accepted_submissions(limit=20)

    for sub in submissions:
        title = sub["title"]
        slug = sub["titleSlug"]
        code, lang = get_submission_code(slug)

        if not code:
            continue

        ext = EXT_MAP.get(lang, "txt")
        filename = f"{sanitize_filename(title)}.{ext}"
        filepath = os.path.join(OUTPUT_DIR, filename)

        # Skip if identical content already exists
        if os.path.exists(filepath):
            with open(filepath, "r", encoding="utf-8") as f:
                if f.read() == code:
                    continue

        with open(filepath, "w", encoding="utf-8") as f:
            f.write(code)

        print(f"Synced: {filename}")


if __name__ == "__main__":
    main()