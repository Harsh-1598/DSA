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
    int Spaces = 2*n-2;
    for(int i = 1; i <= (2*n-1); i++){
        int star = i;
        if(i >= n) star = 2*n -i;
        
        // star 
        for(int j = 1; j <= star; j++){
            cout << '*';
        }
        
        // space
        for(int j = 1; j <= Spaces ; j++){
            cout << " ";
        }
        
        // star
        for(int j = 1; j <= star; j++){
            cout << '*';
        }

        if(i < n) Spaces -=2;
        else Spaces +=2;
        cout << endl;
    }
}
void print21(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n ){
                cout << '*';
            }else cout << ' ';
        }
        cout << endl;
    }
}
void print22(int n){
    for(int i = 0; i < 2*n-1; i++){
        for (int j = 0; j < 2*n-1; j++) {
            int top = i;
            int left = j;
            int right = 2*n -2 -j;
            int bottom = 2*n -2 -i;
            cout << (n- min(min(top,bottom), min(left, right)));
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
        print22(n);
    }
    return 0;
}