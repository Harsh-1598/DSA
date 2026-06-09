class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        auto p = minmax_element(nums.begin(), nums.end());
        long long min_value = *p.first;
        long long max_value = *p.second;
        
        long long final_value = (max_value - min_value) * k;
        return final_value;
    }
};
