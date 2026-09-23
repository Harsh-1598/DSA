#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    bool containsDuplicates(vector<int>& nums){
        unordered_set<int> seen;

        for (auto num : nums)
            if (!seen.insert(num).second)
                return true;

        return false;
    }

};

int main(){

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the values: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    solution obj;

    bool duplicates = obj.containsDuplicates(nums);

    if(duplicates)
        cout << "Contains Duplicates.";
    else
        cout << "Does not Contain Duplicates.";

    return 0;
}