#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int majorityElement(vector<int> nums){
        int ele = nums[0];
        int cnt = 1;

        for (int i = 1; i < nums.size(); i++){
            if (cnt == 0){
                ele = nums[i];
                cnt = 1;
            } else{
                if (ele == nums[i]) cnt++;
                else cnt--;
            }
        }

        if (cnt > 0)
            return ele;
        else
            return -1;
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

    int result = obj.majorityElement(nums);

    if (result)
        cout << "The element is: " << result;
    else
        cout << "No majority element";

    return 0;
}