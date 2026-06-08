class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller;
        vector<int> larger;

        int n = nums.size();
        int equal_size = 0;

        for(int i=0; i<n; i++){
            if(nums[i]<pivot) smaller.push_back(nums[i]);
            else if(nums[i] == pivot) equal_size++;
            else larger.push_back(nums[i]);
        }

        for(int i =0; i< equal_size; i++) smaller.push_back(pivot);

        for(int i =0; i< larger.size(); i++) smaller.push_back(larger[i]);

        return smaller;
    }
};
