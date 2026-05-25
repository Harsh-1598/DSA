class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        int i=0, j=1, size=0;
        while(j<nums.size()){
            if(nums[i]==nums[j]) j++;
            else{
                i++;
                nums[i] = nums[j];
                j++;
            }       
            size = i+1;    
        }
        return size;
    }
};
