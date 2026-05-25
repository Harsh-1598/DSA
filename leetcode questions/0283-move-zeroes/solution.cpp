class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size() == 1 && nums[0] == 0);
        else {
            int i = 0;
            int j = 1;
            while (j < nums.size()) {
                if (nums[i] == 0 && nums[j] == 0) j++;
                else if (nums[i] == 0 && nums[j] != 0) {
                    nums[i] = nums[j];
                    nums[j] = 0;
                    i++;
                    j++;
                } else {
                    i++;
                    j++;
                }
            }
        }
    }
};
