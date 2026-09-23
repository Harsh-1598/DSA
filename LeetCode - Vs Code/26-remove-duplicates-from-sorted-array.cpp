#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int removeDuplicates(vector<int> nums){
        int size;
        return size;
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

    int size = obj.removeDuplicates(nums);

    cout << "The size is: " << size;

    return 0;
}