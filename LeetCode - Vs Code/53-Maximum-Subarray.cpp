#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int maximumSubarray(vector<int> nums){
        int maxVal = INT_MIN;
        vector<int> subarray;
        int temp;
        for (int i = 0; i < nums.size(); i++){
            if (subarray.empty())
                temp = nums[i];
            else
                temp = temp + nums[i];

            maxVal = max(maxVal, temp);

            if(temp > 0)
                subarray.push_back(nums[i]);
            else 
                subarray.clear();
        }
        
        return maxVal;
    }
};

int main(){
    int n;
    cout << "Enter the size: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the values: ";

    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }

    solution obj;

    int result = obj.maximumSubarray(nums);

    cout << "The largest sum is: " << result;

    return 0;
}