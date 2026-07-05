/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:

    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right) {

        // Stack allocated dummy node (No memory leak)
        ListNode dummy(-1);
        ListNode* tail = &dummy;

        while (left != nullptr && right != nullptr) {

            if (left->val <= right->val) {
                tail->next = left;
                left = left->next;
            }
            else {
                tail->next = right;
                right = right->next;
            }

            tail = tail->next;
        }

        tail->next = (left != nullptr) ? left : right;

        return dummy.next;
    }

    ListNode* sortList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return head;

        // Split the list
        ListNode* mid = findMiddle(head);
        ListNode* right = mid->next;
        mid->next = nullptr;

        // Recursively sort both halves
        ListNode* left = sortList(head);
        right = sortList(right);

        // Merge the sorted halves
        return merge(left, right);
    }
};
