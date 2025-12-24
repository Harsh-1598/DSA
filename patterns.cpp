#include<iostream>
using namespace std;
void print12(int n){
    for(int i = 1; i <=n; i++){
        // number 
        for(int j = 1; j <= i; j++){
            cout << j;
        }

        // space
        for(int j = 1; j <= 2*(n-i) ; j++){
            cout << " ";
        }
        
        // number
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
}
void print13(int n){
    int num = 1;
    for(int i=0; i < n; i++){
        // number
        for(int j = 0 ; j <= i; j++){
            cout << num;
            num++;
        }

        // space
        for(int j = 1; j < n; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void print14(int n){
    for(int i=0; i < n; i++){
        char letter = 'A';
        for(int j = 0 ; j <= i; j++){
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }
}
void print15(int n){
    for(int i=0; i < n; i++){
        // number
        char letter = 'A';
        for(int j = n-i ; j >0; j--){
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }
}
void print16(int n){
    for(int i=0; i < n; i++){
        char letter = 'A' + i;
        for(int j = 0 ; j <= i; j++) cout << letter << " ";
        cout << endl;
    }
}
void print17(int n){
    for(int i=0; i < n; i++){
        // space
        for(int j = n-i-1; j>0; j--) cout << " ";
        
        // char
        char letter = 'A';
        for(int j = 0 ; j < (2*i + 1); j++){
            if( j < (2*i +1)/2){
                cout << letter;
                letter++;
            }
            else{
                cout << letter;
                letter--;
            }
        }

        // space
        for(int j = n-i-1; j>0; j--) cout << " ";
        cout << endl;
    }
}
void print18(int n){
    for(int i=n; i >0; i--){
        char letter = 'A';
        for(int j = i ; j <= n; j++){
            cout << char(letter+j-1);
        }
        cout << endl;
    }
}
void print19(int n){
    for(int i = n; i >0; i--){
        // star 
        for(int j = 1; j <= i; j++){
            cout << '*';
        }
        
        // space
        for(int j = 1; j <= 2*(n-i) ; j++){
            cout << " ";
        }
        
        // star
        for(int j = 1; j <= i; j++){
            cout << '*';
        }
        
        cout << endl;
    }
    
    for(int i = 1; i <=n; i++){
        // star 
        for(int j = 1; j <= i; j++){
            cout << '*';
        }
        
        // space
        for(int j = 1; j <= 2*(n-i) ; j++){
            cout << " ";
        }
        
        // star
        for(int j = 1; j <= i; j++){
            cout << '*';
        }
        cout << endl;
    }
}
void print20(int n){
    for(int i = 1; i <=n; i++){
        // star 
        for(int j = 1; j <= i; j++){
            cout << '*';
        }
        
        // space
        for(int j = 1; j <= 2*(n-i) ; j++){
            cout << " ";
        }
        
        // star
        for(int j = 1; j <= i; j++){
            cout << '*';
        }
        cout << endl;
    }
    
    for(int i = n-1; i >0; i--){
        // star 
        for(int j = 1; j <= i; j++){
            cout << '*';
        }
        
        // space
        for(int j = 1; j <= 2*(n-i) ; j++){
            cout << " ";
        }
        
        // star
        for(int j = 1; j <= i; j++){
            cout << '*';
        }
        
        cout << endl;
    }
}



int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        print20(n);
    }
    return 0;
}