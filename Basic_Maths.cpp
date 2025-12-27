#include <bits/stdc++.h>
using namespace std;

void displayVector(vector<int> Vec, bool tf){
    if(tf==false) for(int i=0 ; i < Vec.size(); i++) cout << Vec[i] << " ";
    else for(int i=Vec.size()-1; i>=0; i--) cout << Vec[i] << " ";
    cout << endl;
}

vector<int> ExtractingDigits(int n){
    vector<int> digits;
    int count=0;
    while(n>0){
        int last_digit = n%10;
        n /= 10;
        digits.emplace_back(last_digit);
        count++; 
    }
    displayVector(digits, true);
    return digits;
}

vector<int> findingDivisors(int n){
    vector<int> divisors;
    for(int i = 1; i<= sqrt(n); i++){
        if( n%i==0 && (n/i)!=i){
            divisors.push_back(i);
            divisors.push_back(n/i);
        }
        else if( n%i==0 && (n/i)==i) divisors.push_back(i);
    }
    sort(divisors.begin(), divisors.end());
    displayVector(divisors, false);
    return divisors;
} 

int highest_common_factor(int a, int b){
    int hcf;
    vector<int> divisors_a= findingDivisors(a);
    vector<int> divisors_b= findingDivisors(b);
    for(int i = min(a,b); i>0; i--){
        if(a%i == 0 && b%i == 0){
            hcf = i;
            break;
        }
    }
    return hcf;
}

int HCF_Euclidian_Opt(int a, int b){
    int hcf;
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    if(a==0) hcf = b;
    else hcf = a;
    return hcf;
}

int main(){
    int n,a,b;
    cout << "Enter the n: ";
    cin >> n;
    vector<int> digits = ExtractingDigits(n); // digits are extracted in the reverse order
    
    // 1. Counting Digits
    // 2. Reverse a Number 
    // 3. Check Palindrome
    // 4. Check for Prime
    // 5. Armstrong Number
    // 6. Printing all the Divisors
    vector<int> divisors = findingDivisors(n);
    
    // 7. Highest Common Factor 
    cout << "Enter the a, b: ";
    cin >> a >> b;

    // Normal Method 
    int hcf = highest_common_factor(a,b); // Normal Method 
    cout << hcf << endl;

    // Euclidean Method
    // int HCF_Euclidean_Algorithm = HCF_Euclidian(a,b); // Euclidean Method: HCF(a,b) = HCF(a-b,b), where {a>b}
    int HCF_Euclidean_Algorithm_Optimized = HCF_Euclidian_Opt(a,b); // Optimized Euclidean Method: HCF(a,b) = HCF(a%b,b), where {a>b}; it will decreases the extra steps of repeated subtraction
    cout << HCF_Euclidean_Algorithm_Optimized << endl;
    // T.C of E.A is O(log(min(a,b)))
    return 0;
}