class Solution {
    stack<int> st;

public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        if (nums.size() == 0)
            return nums;

        int n = nums.size();
        vector<int> ans(n, -1);

        for (int i = 2 * n - 1; i >= 0; i--) {

            while (!st.empty() && nums[i % n] >= st.top())
                st.pop();

            if (i < n)
                ans[i] = st.empty() ? -1 : st.top();

            st.push(nums[i % n]);
        }

        return ans;
    }
};