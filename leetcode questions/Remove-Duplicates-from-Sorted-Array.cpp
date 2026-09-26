class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if (n == 0 || n == 1)
            return n;

        int k = 1;
        int val = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                val = nums[i];
                k++;
            }
        }

        return k;
    }
};