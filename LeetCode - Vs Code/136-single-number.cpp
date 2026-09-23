#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int singleNumber(vector<int> nums){
        int XOR = 0;

        for (int i = 0; i < nums.size(); i++)
            XOR ^= nums[i];

        return XOR;
    }
};

int main(){
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the values: ";

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    solution obj;

    int ans = obj.singleNumber(nums);
    cout << "The number is: " << ans;

    return 0;
}