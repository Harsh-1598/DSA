class Solution {
public:
    int missingNumber(vector<int>& nums) {
          int sum = 0, total = 0, n = nums.size();

        for (int i = 0; i < n; i++){
            sum = sum + nums[i];
            total = total + i; 
        }

        total =  total + n; 
 
        return total - sum;
    }
};