#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    // vector<int> TwoSum(vector<int>& nums, int target){
    //     vector<int> result;
    //     int value = target;
    //     for (int i = 0; i < nums.size(); i++){
    //         for (int j = i + 1; j < nums.size(); j++){
    //             if((value - nums[i] - nums[j]) == 0){
    //                 result.push_back(i);
    //                 result.push_back(j);
    //                 return result;
    //             }
    //         }
    //     }
    //     return result;
    // }

    vector<int> TwoSum(vector<int>& nums, int target){
        unordered_map<int, int> mpp;
        
        for (int i = 0; i < nums.size(); i++){
            int more = target - nums[i];
            
            if (mpp.find(more) != mpp.end()) return {mpp[more], i};
            mpp.insert({nums[i], i});
        }
        vector<int> result;
        return result;
    }
};
    
int main(){
        int n;
        cout << "Enter the size of the nums: ";
        cin >> n;
        
        vector<int> nums;
        cout << "Enter the values: ";
        
        int a;
        while(n){
            cin >> a;
            nums.push_back(a);
            n--;
        }
        
        int target;
        cout << "Enter the target:";
        cin >> target;

        solution obj;

        vector<int> result = obj.TwoSum(nums, target);

        if(!result.empty()){
            cout << "Indices: "
                 << result[0] << " "
                 << result[1] << endl;
        } else {
            cout << "No solution found." << endl;
        }
        
        return 0;
}