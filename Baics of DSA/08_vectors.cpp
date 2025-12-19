#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Vectors is the entirely new concept in the C++ which is not present in the C language.

    //creating the vectors:
    vector<int> num; // empty vector 
    vector<int> scores = {84,97,56}; // non-empty vector

    //Adding elements
    num.push_back(10); //Add 10 to end 
    num.push_back(20); //Add 20 to end
    num.push_back(30); //Add 30 to end
    num.push_back(40); //Add 40 to end
    num.push_back(50); //Add 50 to end

    cout << "vector size: " << num.size() << endl; // tells numbers of elements.
    cout << "First element: " << num[0] << endl;
    cout << "Second element: " << num[1] << endl;

    // Loops in the vectors:
    cout << "Method 1" << endl;
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    cout << "Method 2" << endl;
    for (int i : num)
    {
        cout << i << " ";
    }
    cout << endl;

    // Vector Operations (can also be used with arrays and strings):
    cout << "Size: " << num.size() << endl;
    cout << "Is empty: " << num.empty() << endl;

    num.pop_back(); //Removes the last element.
    cout << "After removing last: size = " << num.size() << endl;

    int a= num.back(); //Tells the last element.
    cout << "The last element is: " << a << endl;
    cout << "After removing last: size = " << num.size() << endl;

    scores.clear(); // Clearing all the elements.
    cout << "After clearing: size = " << scores.size() << endl;
    
    return 0;
}