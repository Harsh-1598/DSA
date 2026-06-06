class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum;
        vector<int> rightSum;

        int sum =0, n = nums.size();
        for(int i = 0; i<n; i++){
            leftSum.push_back(sum);
            sum+=nums[i];
        }

        for(int i = 0; i<n; i++){
            sum-=nums[i];
            rightSum.push_back(sum);
        }

        for(int i = 0; i<n; i++){
            rightSum[i] = abs(leftSum[i]-rightSum[i]);
        }

        return rightSum;
    }
};
