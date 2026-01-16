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

int sumN_value(int n){
    if (n<1){
        return 0;
    }
    return n + sumN_value(n-1);
}

void sumN_print(int n, int sum){
    if(n<1){
        cout << sum << " ";
        return;
    }
    sumN_print(n-1, sum+n);
    return;    
}

int FactN_value(int n){
    if(n==0){
        return 1;
    }
    return n * FactN_value(n-1);
}

void FactN_print(int n, int fact){
    if(n==0){
        cout << fact << " ";
        return;
    }
    FactN_print(n-1, (fact*n));
}

int main(){
    
    // Q1: 
    string name;
    int n; 
    // cout << "Enter the name and no of times loop runs: ";
    // cin >> name >> n;
    // printName(n, name);
    
    // Q2:
    // cout << "\n" << "Enter the n: ";
    // cin >> n;
    // oneToN(1, n);
    
    // Q3:
    // cout << "\n" << "Enter the n: ";
    // cin >> n;
    // NToOne_backtrack(n, 1);
    
    // Task-1: sum of first n numbers
    
    // Way-1: returns a value 
    // cout << "\n" << "Enter the n: ";
    // cin >> n;
    // int sum = sumN_value(n);
    // cout << sum << " ";
    
    // Way-2: prints the sum value inside it 
    // cout << "\n" << "Enter the n: ";
    // cin >> n;
    // sum=0;
    // sumN_print(n, sum);
    
    // Task-2: Factorial of n numbers

    // Way-1: returns a value 
    // cout << "\n" << "Enter the n: ";
    // cin >> n;
    // int fact = FactN_value(n);
    // cout << fact << " ";
    
    // Way-2: prints the fact value inside it 
    // cout << "\n" << "Enter the n: ";
    // cin >> n;
    // fact=1;
    // FactN_print(n, fact);
    
    return 0;
}