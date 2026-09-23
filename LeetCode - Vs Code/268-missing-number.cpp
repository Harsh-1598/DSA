#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int missingNumber(vector<int> nums){
        int sum = 0, total = 0, n = nums.size();

        for (int i = 0; i < n; i++){
            sum = sum + nums[i];
            total = total + i; 
        }

        total =  total + n; 
 
        return total - sum;
    }

    // Xor Method can also be used here which is more optimised.
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

    int ans = obj.missingNumber(nums);
    cout << "The missing number is: " << ans;

    return 0;
}