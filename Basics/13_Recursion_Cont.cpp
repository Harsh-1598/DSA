#include<iostream>
using namespace std;

void revArr_value(int arr[], int size, int i){
    if (i<(size/2) || size-i-1 == i){
        return;
    }
    swap(arr[i], arr[size-i-1]);
    revArr_value(arr, size, --i);
}

void revArr_print(int arr[], int size){
    if (size<1){
        return;
    }
    cout << arr[size-1] << " " ;
    revArr_print(arr, size-1);
}

bool checkPalindrome(int arr[], int left, int right){
    if(left > right){
        return true;
    }
    else if (arr[left] != arr[right]){
        return false;
    }
    return checkPalindrome(arr, left+1, right-1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout << size;
    int arr1[] = {1,2,3,3,2,1};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    
    // Task-1: Reverse an array 
    // way-1: returns value 
    // revArr_value(arr, size, size-1);    
    
    // cout << "The array after the changes: " << endl;
    // for (int i = 0; i < size; i++) cout << arr[i] << " ";
    // cout << endl;
    
    // way-2: prints value 
    // revArr_print(arr, size);
    
    // Task-2: Check for the palindrome 
    bool isPalindrome = checkPalindrome(arr, 0, size-1);
    cout << isPalindrome << " ";
    isPalindrome = checkPalindrome(arr1, 0, size1-1);
    cout << isPalindrome << " ";

    return 0;
}