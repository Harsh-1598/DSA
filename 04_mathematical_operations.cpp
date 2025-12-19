#include<iostream>
using namespace std;
int main(){
    int a= 10;
    int b= 2;

    // same as C, normal operations:
    cout << "sum: " << (a+b) << endl;
    cout << "substraction: " << (a-b) << endl;
    cout << "multiply: " << (a*b) << endl;
    cout << "divide: " << (a/b) << endl;
    cout << "remainder: " << (a%b) << endl;
    
    // same as C, comparison operations:
    cout << "a == b: " << (a == b) << endl;   // Equal to
    cout << "a != b: " << (a != b) << endl;   // Not equal to
    cout << "a > b: " << (a > b) << endl;     // Greater than
    cout << "a < b: " << (a < b) << endl;     // Less than
    cout << "a >= b: " << (a >= b) << endl;   // Greater than or equal
    cout << "a <= b: " << (a <= b) << endl;   // Less than or equal
    
    return 0;
}

