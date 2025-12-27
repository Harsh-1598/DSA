#include <bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int> data1 = {10, 23};
    cout << data1.first << " " << data1.second << endl;

    pair<int, pair<int, char>> data2 = {15, {10, 'H'}};
    cout << data2.first << " " << data2.second.first << " " << data2.second.second << endl;

    pair<int, int> arr[] = {{15, 17}, {10, 23}, {65, 98}};
    cout << arr[0].first << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}
void explainVector(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // push_back but faster

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4); // By-default it assumes the values as the pairs

    vector<int> v1(5, 100); // {100, 100, 100, 100, 100}
    vector<int> v2(5);      // a vector of size 5 has been declared with all the values as 0 or garbage values

    vector<int> v3(v1); // v3 is another vector with the same values as v

    // Iterators:
    vector<int>::iterator it_begin = v.begin(); // begin gives the address of the first element and iterator gives us the memory where the element lies
    cout << *(it_begin) << endl;
    it_begin++;
    cout << *(it_begin) << endl;

    vector<int>::iterator it_end = v.end();               // points just after the end of the element, like it-- will show the last element
    vector<int>::reverse_iterator it_rend = v.rend();     // just reverse end
    vector<int>::reverse_iterator it_rbegin = v.rbegin(); // just reverse begin

    cout << v[0] << " " << v.at(1) << endl; // .at() prints at the index
    cout << v.back() << " " << endl;        // prints the last element

    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    v.emplace_back(7);

    // auto: can automatically knows the datatypes and iterators based on the data. So u can write auto instead of int, string, vector<int>::reverse_iterator, vector<int>::iterator, etc

    // using the iterator:
    cout << "Printing the values of vector v: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *(it) << " ";
    cout << endl;

    // using the auto:
    // cout << "Printing the values of vector v: " ;
    // for(auto it= v.begin(); it!= v.end(); it++) cout << *(it) << " ";
    // cout << endl;

    // Deletion in the vector:
    // {1, 2, 3, 4, 5, 6, 7}
    v.erase(v.begin() + 1);                // {1, 3, 4, 5, 6, 7}
    v.erase(v.begin() + 1, v.begin() + 3); // {1, 5, 6, 7} --> deletes [Start, End)

    // Insert function
    vector<int> inserting(2, 100);                   // {100, 100}
    inserting.insert(inserting.begin(), 1598);       // {1598, 100, 100}
    inserting.insert(inserting.begin() + 1, 2, 200); // {1598, 200, 200, 100, 100}

    vector<int> copy(2, 50);                                       // {50, 50}
    inserting.insert(inserting.begin(), copy.begin(), copy.end()); // {50, 50, 1598, 200, 200, 100, 100}

    cout << inserting.size(); // 7
    inserting.pop_back();     // {50, 50, 1598, 200, 200, 100}

    // v -> {1, 5, 6, 7}
    // copy -> {50, 50}
    v.swap(copy); // v -> {50, 50} , copy -> {1, 5, 6, 7}

    v.clear(); // erases the entire vector

    cout << v.empty(); // says if the vector is empty.

    // Vectors internal operation is a Singly LL
}
void explainList(){
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5);    // {5, 2, 4}
    ls.emplace_front(6); // {6, 5, 2, 4}

    cout << "Printing the values of list ls: ";
    for (auto it = ls.begin(); it != ls.end(); it++)
        cout << *(it) << " ";
    cout << endl;

    // lists internal operation is a Doubly LL
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, erase, size, swap
}
void explainDeque(){
    deque<int> dq;

    dq.push_back(2);     // {2}
    dq.emplace_back(4);  // {2,4}
    dq.push_front(5);    // {5, 2, 4}
    dq.emplace_front(6); // {6, 5, 2, 4}

    dq.pop_back();  // {6, 5, 2}
    dq.pop_front(); // {5, 2}

    cout << dq.back();  // prints the last element
    cout << dq.front(); // prints the first element

    cout << "Printing the values of deque dq: ";
    for (auto it = dq.begin(); it != dq.end(); it++)
        cout << *(it) << " ";
    cout << endl;

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, erase, size, swap
}
void explainStack(){
    stack<int> st;

    st.push(1);    // {1}
    st.push(2);    // {1,2}
    st.push(3);    // {1, 2, 3}
    st.push(4);    // {1, 2, 3, 4}
    st.emplace(5); // {1, 2, 3, 4, 5}

    cout << st.top(); // prints 5 "** st[2] is invalid **"

    st.pop(); // {1, 2, 3, 4}
    st.pop(); // {1, 2, 3}

    cout << st.top();   // prints 3
    cout << st.size();  // prints 3
    cout << st.empty(); // prints 0 (false)

    stack<int> st1, st2;
    st1.swap(st);
    cout << st.empty(); // prints 1 (true)

    // T.C of push, pop and top is O(1).
    // Follows LIFO structure
}
void explainQueue(){
    queue<int> q;

    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.emplace(3); // {1, 2, 3}

    cout << q.back(); // prints 3
    q.back() += 5;
    cout << q.back(); // prints 8

    cout << q.front(); // prints 1

    // Now q is {1, 2, 8}
    q.pop(); // {2, 8}

    cout << q.front(); // prints 2

    // T.C of push, pop and top is O(1).
    // Follows FIFO structure
    // size swap empty functions same as stacks
}
void explainPQ(){
    // Max Heap or Maximum Priority
    priority_queue<int> pq_max;

    pq_max.push(5);     // {5}
    pq_max.push(2);     // {5,2}
    pq_max.push(8);     // {8,5,2}
    pq_max.emplace(10); // {10,8,5,2}

    cout << pq_max.top(); // prints 10
    pq_max.pop();
    cout << pq_max.top(); // prints 8

    // Min Heap or Minimum Priority
    priority_queue<int, vector<int>, greater<int>> pq_min;
    pq_min.push(5);     // {5}
    pq_min.push(2);     // {2, 5}
    pq_min.push(8);     // {2, 5, 8}
    pq_min.emplace(10); // {2, 5, 8, 10}

    cout << pq_min.top(); // prints 2

    // T.C of push and pop is log(n) and top is O(1).
    // Follows a tree data structure internally
    // size swap empty functions same as others
}
void explainSet(){
    set<int> st;

    st.insert(1);  // {1}
    st.insert(2);  // {1,2}
    st.insert(2);  // {1,2}
    st.insert(4);  // {1,2,4}
    st.emplace(3); // {1,2,3,4}
    st.emplace(5); // {1,2,3,4,5}

    auto it = st.find(3); // gives an iterator to the value '3'
    auto it = st.find(6); // gives an iterator to the end

    st.erase(5); // erases 5 // takes log(n) T.C

    int cnt = st.count(1); // will give 1 if present else will give 0

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // {1,4,5} --> [first, last)

    // lower_bound() and upper_bound() function works in the same way as in vector it does.

    auto it3 = st.lower_bound(2);
    auto it4 = st.upper_bound(3);

    // all functions T.C is log(n).
    // size, swap, empty, begin, end, rend, rbegin, insert functions same as vectors.
    // set stores only UNIQUE values in the SORTED manner.
    // Internally a Tree Data Structure.
}
void explainMultiSet(){
    // Everything is same as sets.
    // MultiSet stores only in the SORTED manner.

    multiset<int> ms;
    ms.insert(1);  // {1}
    ms.insert(1);  // {1,1}
    ms.emplace(1); // {1,1,1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1); // here, will give 0 as all 1's erased otherwise will give 3
    
    multiset<int> ms = {1, 1, 1, 2, 3, 3, 4};

    auto it1 = ms.find(1); // Points to first 1
    auto it2 = ms.find(2); // Points to 2
    ms.erase(it1, it2); // Result: {2, 3, 3, 4} --> [Start, last)

    // rest all function same as set
}
void explainUSet(){
    unordered_set<int> st;
    // lower_bound and upper_bound function does not works, rest all functions are same as above, it does not stores in any particular order it has a better complexity than set in most cases, except some when collision happens.
    // It stores all the UNIQUE values.
    // T.C in most of the cases are O(1) except in the worst case it can go to O(n).
}
void explainMap(){
    map<int, int> mpp;
    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;
    
    mpp[1] = 2; // inserts key = 1 and value = 2
    mpp.emplace(3, 1); // inserts key = 3 and value = 1 // emplace makes pairs by-default so no curly brakets 
    mpp.insert({2, 4}); // inserts key = 2 and value = 4
    // {
    //     {1, 2}
    //     {2, 4}
    //     {3, 1}
    // } values stored in the sorted order of keys.
    
    for (auto it : mpp) cout << it.first << " " << it.second << endl; // first is key and second is the value

    mpp2[{2, 3}] = 10;

    cout << mpp[1]; // it will give the output as 2 for the key = 1 
    cout << mpp[5]; // it will give the output as 0 or null

    auto it = mpp.find(3); // will give the location of the pair where key = 3 
    cout << (*it).second;  // print the value at the stored location
    
    auto it = mpp.find(5); // points after the map or after the end

    // This is the syntax 
    auto it = mpp.lower_bound(2);  
    auto it = mpp.upper_bound(3);  
    
    // T.C for most of the cases is log(n)
    // erase, swap, size, empty, are same as above
    // map is the key value data structure with the unique keys stored in the sorted order of the keys.
}
void explainMultimap() { 
    // everything same as map, only it can store multiple keys 
    // only mpp[key] cannot be used here  
    // it can store the duplicate keys but in the ordered manner
}
void explainUnorderedMap() { 
    // T.C for most of the cases is O(1) and in the worst case can go to O(n).
    // same as set and unordered_Set difference.
    // will have unique keys but in the unordered manner
}

int main()
{
    // In this file we will learn about the Containers (Data Structures) and Iterators, and in the second file we will learn about the Algorithms.  

    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    // explainMultiSet();
    // explainUSet();
    // explainMap();
    // explainMultiMap();
    // explainUnorderedMap();

    return 0;
}