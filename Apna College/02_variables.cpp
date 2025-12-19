#include<iostream>
using namespace std;
int main(){
    // Same Variables as C:
    int a = 1598;
    double b= 15.98;
    char first = 'A'; // In the char u have to write the SINGLE char in the SINGLE quotes.
    bool True = true;
    
    // New Variables in C++:
    string name = "Harsh";
    
    // Outputs:
    cout << "int number:" << a << endl;
    cout << "double number:" << b << endl;
    cout << "Char:" << first << endl;
    cout << "boolean:" << True << endl; // prints 1 and 0 for true and false respectively.
    cout << "string:" << name << endl; // string is an object
    
    name = "Harsh Kejriwal"; // string is a mutuable object and occupies the same address in the memory even after the modifications. 
    cout << "string:" << name << endl; 
    return 0;
}
