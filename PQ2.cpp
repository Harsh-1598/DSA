#include<iostream>
#include<vector>
#include <algorithm>
#include <sstream>
using namespace std;

string longest_word(string str){  // returns the longest word
    string longestword="";
    string currword="";
    for (int i = 0; i <= str.length(); i++){   
        if (i == str.length()-1 || str[i] == ' '){       //checks for the delimeter
            if (currword.length() > longestword.length()){ // if the length of the current word is the greater than the longest word then put that in the longest word it also ensures that the first word comes.
                longestword = currword; 
            }
            currword= "";
        } else{      // assigns the letter in the word to the current word 
            currword += str[i]; 
        }
    }
    return longestword;
}

// OPTIMAL SOLUTION using stringstream:
string longest_word_optimal(string str) {
    stringstream ss(str);
    string word, longest = "";
    
    while (ss >> word) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }
    return longest;
}

vector<int> removeDuplicate(vector<int> numbers){  
    vector<int> uniqueVector= {numbers[0]};
    for (int i = 1; i < numbers.size(); i++){
        for (int j = 0; j < uniqueVector.size(); j++){
            if (uniqueVector[j] == numbers[i]){
                break;
            } else if(j == uniqueVector.size() -1 && uniqueVector[j] != numbers[i]){
                uniqueVector.push_back(numbers[i]);
            }
        }           
    }
    for (int i = 0; i < uniqueVector.size(); i++){
        cout << uniqueVector[i] << " ";
    }
    cout << endl;
    return uniqueVector;        
}

vector<int> sorting(vector<int> uniqueVector){ 
    for (int i = 0; i < uniqueVector.size()-1; i++){
        for (int j = 0; j < i; j++){
            if (uniqueVector[j+1] < uniqueVector[j]){
                int temp = uniqueVector[j+1];
                uniqueVector[j+1] = uniqueVector[j];
                uniqueVector[j] = temp;
            }
        }   
    }
    
    for (int i = 0; i < uniqueVector.size()-1; i++){
        cout << uniqueVector[i] << " ";
    }
    cout << endl;
    return uniqueVector;
}

vector<int> targetint(vector<int> sortedVector, int target){  
    vector<int> targetVector;
    for (int i = 0; i < sortedVector.size(); i++){
        for (int j = i; j < sortedVector.size(); j++){
            if (sortedVector[i] + sortedVector[j] == target){
                targetVector.push_back(sortedVector[i]);
                targetVector.push_back(sortedVector[j]);
            }
        }
    }   

    for (int i = 0; i < targetVector.size(); i++){
        cout << targetVector[i] << " ";
    }
    cout << endl;
    return targetVector;
}

vector<char> reverseVec(vector<char> chara){
    vector<char> revVector(chara.size());
    for(int i=0; i<= chara.size()-1; i++){
        for(int j = chara.size()-1-i; j>=0; j--) revVector[j] = chara[i];
    }
    for(char& k : revVector ) cout << k;
    return revVector;
}

string lowercase(string &str){
    for(char& i : str ){
        if (i >= 'A' && i <= 'Z') i+=32;        
    }
    return str;
}

bool isPalindrome(string &str){
    bool isPalindrom = false;
    str = lowercase(str);
    vector<char> chara;
    for(char& i : str ){
        if ((i >= '0' && i <= '9') || (i >= 'a' && i <= 'z')) chara.push_back(i);        
    }
    for(char& i : chara ) cout << i;
    cout << '\n';
    
    vector<char> revVector = reverseVec(chara); 
    
    if (chara == revVector) isPalindrom = true;
    
    return isPalindrom;
}

void rotateMatrix(vector<vector<int>> &matrixx, int rows, int cols){
    vector<vector<int>> rotatedMatrix(rows, vector<int>(cols));
    vector<int> temp; 
    for(int i = rows -1; i >= 0; i--){
        for (int j = 0; j < cols; j++){
            temp.push_back(matrixx[i][j]);
        }
        for (int k=0 ; k < rows; k++){
            rotatedMatrix[k][i] = temp[k];
        }
    }
    matrixx = rotatedMatrix;
}

int main(){

    // // Q11:
    // string str = "hello my name is harsh how are you";
    // string longestword = longest_word(str);
    // cout << longestword << endl;
    
    // // Q12: 
    // vector<int> numbers = {3, 7, 1, 9, 2, 8, 5, 3, 1, 16, 7, 10, 11, 12, 7, 8, 15}; 
    // vector<int> uniqueVector= removeDuplicate(numbers);
    // vector<int> sortedVector = sorting(uniqueVector);
    // sort(uniqueVector.begin(), uniqueVector.end());    
    // int target = 15;
    // vector<int> targetVector = targetint(sortedVector, target);
    // cout << endl;
    
    // // Q13:
    // string str = "hello lleH";
    // bool isPalindrom = isPalindrome(str);
    // cout << "\nDoes the Str is Palindrome: " << isPalindrom << endl;

    return 0; 
}