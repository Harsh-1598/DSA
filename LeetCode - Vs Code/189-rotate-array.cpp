#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> rotateArray(vector<int> nums, int k){
        int n = nums.size();
        k %= n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin() + k, nums.end());
        reverse(nums.begin(), nums.begin() + k );

        return nums;
    }
};

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    int k;
    cout << "Enter k: ";
    cin >> k;

    vector<int> nums(n);
    cout << "Enter values: ";

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    solution obj;

    nums = obj.rotateArray(nums, k);
    
    for (int i = 0; i < n; i++){
        cout << nums[i] << "  ";
    }

    return 0;
}