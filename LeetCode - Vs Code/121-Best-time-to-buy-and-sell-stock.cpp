#include <bits/stdc++.h>
using namespace std;

class solution{
public: 
    int maximumProfit(vector<int> prices){
        int mini = prices[0], maxProfit = 0;

        for (int i = 0; i < prices.size(); i++){
            int cost = prices[i] - mini;
            maxProfit = max(maxProfit, cost);
            mini = min(mini, prices[i]);
        }

        return maxProfit;
    }
};

int main(){
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter the values: ";

    for (int i = 0; i < n; i++){
        cin >> prices[i];
    }

    solution obj;

    int maxProfit = obj.maximumProfit(prices);
    cout << "The maxProfit is: " << maxProfit;

    return 0;
}