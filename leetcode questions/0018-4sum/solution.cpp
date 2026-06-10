class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int a = 0; a < n - 3; a++) {
            if (a > 0 && nums[a] == nums[a - 1]) continue;
            for (int b = a+1; b < n - 2; b++) {
                if (b > a+1 && nums[b] == nums[b - 1]) continue;
                int c = b + 1;
                int d = n - 1;

                while (c < d) {
                    long long sums = 1LL * nums[a] + nums[b] + nums[c] + nums[d];
                    if (sums < target) c++;
                    else if (sums > target) d--;
                    else {
                        vector<int> temp = {nums[a], nums[b], nums[c], nums[d]};
                        ans.push_back(temp);
                        c++;
                        d--;
                        while (c < d && nums[c] == nums[c - 1]) c++;
                        while (c < d && nums[d] == nums[d + 1]) d--;
                    }
                }
            }
        }

        return ans;
    }
};
