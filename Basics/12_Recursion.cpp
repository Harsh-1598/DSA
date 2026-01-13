#include<iostream>
using namespace std;

void printName(int n, string name){
    if (n<=0){
        return;
    }
    cout << name << " ";
    printName(n-1, name);
}

void oneToN(int i, int n){
    if (i==n+1){
        return;
    }
    cout << i << " ";
    oneToN(i+1, n);
}

// In backtracking we use + or - in the function call in the opposite manner
void NToOne_backtrack(int n, int i){
    if(i>n){
        return;
    }
    NToOne_backtrack(n,i+1);
    cout << i << " ";
}


int main(){
    // Q1:
    string name;
    int n; 
    cout << "Enter the name and no of times loop runs: ";
    cin >> name >> n;
    printName(n, name);
    
    // Q2:
    cout << "\n" << "Enter the n: ";
    cin >> n;
    oneToN(1, n);
    
    // Q3:
    cout << "\n" << "Enter the n: ";
    cin >> n;
    NToOne_backtrack(n, 1);

    return 0;
}