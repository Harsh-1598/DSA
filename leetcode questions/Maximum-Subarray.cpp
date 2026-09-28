class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxVal = INT_MIN;
        vector<int> subarray;
        int temp;
        for (int i = 0; i < nums.size(); i++) {
            if (subarray.empty())
                temp = nums[i];
            else
                temp = temp + nums[i];

            maxVal = max(maxVal, temp);

            if (temp > 0)
                subarray.push_back(nums[i]);
            else
                subarray.clear();
        }

        return maxVal;
    }
};