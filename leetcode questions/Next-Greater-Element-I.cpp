class Solution {
    stack<int> st;

public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() == 0)
            return nums1;
        if (nums2.size() == 0)
            return nums2;

        unordered_map<int, int> mpp;

        for (int i = nums2.size() - 1; i >= 0; i--) {

            while (!st.empty() && st.top() <= nums2[i])
                st.pop();

            if (st.empty())
                mpp.insert({nums2[i], -1});
            else
                mpp.insert({nums2[i], st.top()});

            st.push(nums2[i]);
        }

        vector<int> ans;

        for (int num : nums1)
            ans.push_back((mpp.find(num))->second);

        return ans;
    }
};