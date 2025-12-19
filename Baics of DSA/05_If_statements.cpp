#include<iostream>
using namespace std;
int main(){
    int score = 85;
    char sec = 'E';
    // Simple - if 
    if(score >= 80){
        cout << "Grade A" << endl;
    }    

    // if-else
    if (score >= 40){
        cout << "You passed" << endl;
    }
    else{
        cout << "You failed" << endl;
    }
    
    // if-else if-else
    if (score >= 90){
        cout << "Grade A+" << endl;
    }
    else if (score >= 80){
        cout << "Grade A" << endl;
    }
    else if (score >= 70){
        cout << "Grade B" << endl;
    }
    else if (score >= 60){
        cout << "Grade C" << endl;
    }
    else{
        cout << "You failed" << endl;
    }
    
    // using AND(&&) and OR(||) operator:
    if(score >= 90 && sec=='E'){
        cout << "Very Good Student" << endl; 
    }
    else{
        cout << "Bad Student" << endl; 
    }
    
    if(score >= 70 || sec=='E'){
        cout << "Good Student" << endl; 
    }

    return 0;
}