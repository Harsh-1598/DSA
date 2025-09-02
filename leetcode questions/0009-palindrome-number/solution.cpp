class Solution {
public:
    bool isPalindrome(int x){
        if(x<0) return false;
        vector<int> revVector, correctVector;
        int j;
        while(x>=1){
            j=x%10;
            revVector.push_back(j);
            x/=10;}        
        for(int i =revVector.size()-1; i>=0; i--){
            correctVector.push_back(revVector[i]);}
        if(revVector == correctVector) return true;
        else return false;}
};
