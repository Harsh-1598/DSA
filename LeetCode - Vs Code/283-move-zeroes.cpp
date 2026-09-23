#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> moveZeroes(vector<int> nums){
        int n = nums.size(), i = 0;
        if (n == 1)
            return nums;

        for (int j = 1; j < nums.size(); j++){
            if (nums[i] == 0 && nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
            }
        }
        
        return nums;
    }
};

int main(){
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter values: ";

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    solution obj;

    nums = obj.moveZeroes(nums);

    for (int i = 0; i < n; i++)
        cout << nums[i] << "  ";
    
    return 0;
}