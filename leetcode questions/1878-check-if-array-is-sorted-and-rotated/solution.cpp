class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int breaks = 0;
        
        // Count how many times a number is greater than the next number
        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                breaks++;
            }
        }
        
        // Valid rotated sorted array has at most 1 "break"
        return breaks <= 1;
    }
};
