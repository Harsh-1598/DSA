#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) { 
    if(p1.second < p2.second) return true; 
    if(p1.second > p2.second) return false; 
    // they are same  
    if(p1.first > p2.first) return true; 
    return false;

    // always while writing the comparator (comp), analyse them in the terms of two pairs, p1 and p2. 
}

void explainExtra() {

    // Sorting:
    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    
    int n = 3;
    sort(arr, arr + n); 
    sort(arr + 1, arr + 3);                        // sorts between index 1 and 2
    sort(arr, arr + n, greater<pair<int, int>>()); // Sorts between the index in descending order
    
    // Condition for the comparator:
    // sort it according to second element, if second element is same, then sort it according to first element but in descending.
    // this is just a random case scenario of our choice for this comparator.
    
    vector<pair<int, int>> vec = {{1, 2}, {2, 1}, {4, 1}};
    
    sort(vec.begin(), vec.end()); 
    sort(vec.begin() + 1, vec.end());  // sorts from index 1 to (end-1)
    sort(vec.begin(), vec.end(), greater<pair<int, int>>()); 
    sort(vec.begin(), vec.begin() + n, comp);  // {4,1}, {2, 1}, {1, 2}}; // Sorts between the index in comp order
    

    // Binary:
    int num_int = 7;
    int cnt = __builtin_popcount(num_int); // it will print the count of the 1 in the binary. so here it will be binary(7) = 111 so print 3.

    long long num_ll = 165786598687;
    cnt = __builtin_popcountll(num_ll); // same but works for long long value.

    string s = "123";
    sort(s.begin(), s.end());

    cout << "All the permutations are: " << endl;
    do cout << s << endl;
    while (next_permutation(s.begin(), s.end())); // next_permutation finds the next permutation of the chars in the strings in the dictionary order and will just start after the current dictionary order and go till last and then will print the false/null for no more orders left.

    pair<int, int> maxi = *max_element(arr, arr + n); // max_element gives the iterator to the max element
    int maxFirst = max_element(arr, arr + n)->first; // if you want just the first element
}

int main(){
    // In this file we will learn about the Algorithms. 
    explainExtra();

    return 0;
}