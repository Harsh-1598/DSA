#include<iostream>
using namespace std;
int main(){
    string message = "hello world!";
    cout << "Message: " << message << endl; 
    cout << "First char: " << message[0] << endl; // prints first char
    cout << "Last char: " << message[message.length()-1] << endl; //prints second char
    cout << "Greeting: " << "Hello, " + message << endl; // adds two strings
   
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