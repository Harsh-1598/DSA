class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        vector<int> uniqueVector = {nums[0]};
        for (int i = 1; i < nums.size(); i++) {
            for (int j = 0; j < uniqueVector.size(); j++) {
                if (nums[i] != uniqueVector[j] &&
                           j == uniqueVector.size() - 1) {
                    uniqueVector.push_back(nums[i]);k++;exit;}}}
        nums = uniqueVector;
        return k;}};
