#include<iostream>
using namespace std;
int main(){
    string message = "hello world!";
    cout << "Message: " << message << endl; 
    cout << "First char: " << message[0] << endl; // prints first char
    cout << "Last char: " << message[message.size()-1] << endl; //prints last char
    cout << "Greeting: " << "Hello, " + message << endl; // adds two strings
   
    //you can use both the size() and length() method in the strings but in the vectors only size() works and in arrays both dont work until size() is used with the std:array.

    //comparing strings:
    string w1 = "apple";
    string w2 = "banana";
    if( w1 == w2 ){
        cout << "same" << endl;
    }
    else{
        cout << "different" << endl;
    }
    
    //Loops through strings:
    cout << "Normal Method" << endl;
    for (int i = 0; i < message.length(); i++) // int since the i is iterating based on the index
    {
        cout << message[i] << " ";
    }
    cout << endl;
    
    cout << "C++ Method" << endl;
    for (char i : message)  // char since each element is a character
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}