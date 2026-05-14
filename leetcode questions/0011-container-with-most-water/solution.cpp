class Solution {
public:
    int maxArea(vector<int> height) {
        if (height.size() < 2) return 0;
        int max_Area = 0;
        int i = 0;
        int j = height.size() - 1;
        while (i < j) {
            int ht = min(height[i], height[j]);
            int Area = ht * (j - i);
            if (Area > max_Area) max_Area = Area;
            height[i] < height[j] ? i++ : j--;
        }
        return max_Area;
    }
};
