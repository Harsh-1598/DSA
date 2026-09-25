class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n <= 2)
            return 0;

        int total = 0;

        // -----Brute Force-----
        // vector<int> prefixSum(n, 0);
        // prefixSum[0] = height[0];

        // for (int i = 1; i < n; i++)
        //     prefixSum[i] = max(height[i], prefixSum[i - 1]);

        // vector<int> suffixSum(n, 0);
        // suffixSum[n - 1] = height[n - 1];

        // for (int i = n - 2; i >= 0; i--)
        //     suffixSum[i] = max(height[i], suffixSum[i + 1]);

        // for (int i = 0; i < n; i++)
        //     total += min(prefixSum[i], suffixSum[i]) - height[i];

        // -----Optimal-----
        int lmax = 0, rmax = 0;
        int l = 0, r = n - 1;

        while (l < r) {
            lmax = max(lmax, height[l]);
            rmax = max(rmax, height[r]);

            if (lmax < rmax) {
                total += lmax - height[l];
                l++;
            } else {
                total += rmax - height[r];
                r--;
            }
        }

        return total;
    }
};