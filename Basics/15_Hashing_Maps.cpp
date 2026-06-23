#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    // Number Hashing:
    // int n;
    // cout << "n: ";
    // cin >> n;
    // int arr[n];
    // for(int i =0; i <=n; i++){
    //     cin >> arr[i];
    // }

    // int hash[7] = {0}; // Here, the space for the hash array is 7 but it depends upon the sample space.
    // for(int i = 0 ; i <=n; i++){
    //     hash[arr[i]]++;
    // }

    // int t;
    // cout << "Test Cases: ";
    // cin >> t;

    // int number;
    // while(t--){
    //     cout << "Number: ";
    //     cin >> number;
    //     cout << hash[number] << endl;
    // }

    // Character Hashing:
    // string s1 = "hello";

    // int hash['z' - 'a'] = {0};

    // for(int i = 0; i < s1.length(); i++){
    //     hash[s1[i] - 'a']++;
    // }

    // int t;
    // cout << "Test Cases: ";
    // cin >> t;

    // char ch;
    // while(t--){
    //     cout << "character: ";
    //     cin >> ch;
    //     cout << hash[ch - 'a'] << endl;
    // }

    // Number Hashing (for the bigger numbers greater than 10^7):
    int n;
    cout << "n: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i <= n; i++) cin >> arr[i];

    unordered_map<int, int> mpp;
    for (int i = 0; i <= n; i++) mpp[arr[i]]++;

    int t;
    cout << "Test Cases: ";
    cin >> t;

    int number;
    while (t--)
    {
        cout << "Number: ";
        cin >> number;
        cout << mpp[number] << endl;
    }

    return 0;
}
