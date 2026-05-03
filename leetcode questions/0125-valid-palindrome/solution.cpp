#include <algorithm>


class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;

        for(char c : s){
            if(isalnum(c)){
                cleaned += tolower(c);
            }
        }

        string temp = cleaned;
        reverse(temp.begin(), temp.end());

        return cleaned == temp;
    }
};
