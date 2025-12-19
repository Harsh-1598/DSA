#include<iostream>
using namespace std;
int main(){
    int arr[5]= {1,2,3,4,5};
    cout << "first element:" <<arr[0] << endl;    
    cout << "last element:" <<arr[4] << endl;
    
    cout << "The array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    arr[3]=9;
    cout << "The 4th element after changes: " <<arr[3] << endl;
    
    cout << "The array after the changes: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int target = 1;
    bool found = false;
    for(int i=0; i<5; i++){
        if(arr[i]==target){
            found = true;
            cout << "The target is located in the array at the " << i <<"th location." <<endl;
            break;
        }
    }
    if(found == false){
        cout << "The target is not present in the array." <<endl; 
    }
    
    return 0;
}