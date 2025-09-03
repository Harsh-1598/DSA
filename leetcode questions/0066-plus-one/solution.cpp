class Solution {
public:
    vector<int> plusOne(vector<int>& digits){
        if(digits.size()==0){
            digits.push_back(1); 
            return digits;
        }
        int i = digits.size()-1;
        bool insert1= false;
        if(digits[i]!=9) {digits[i]+= 1; return digits;}
        else{
            for(i= digits.size()-1;i>=0;i--){
                if(digits[0]==9) insert1= true;
                if(digits[i]!=9) {digits[i]+=1; insert1 = false; return digits;}
                else digits[i] = 0;
            }
            if(insert1) digits.insert(digits.begin(),1);
            return digits;
        }
    }       
};
