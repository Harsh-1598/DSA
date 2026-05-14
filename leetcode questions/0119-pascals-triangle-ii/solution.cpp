class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0)
            return {1};
        else if (rowIndex == 1) {
            return {1,1};
        } else {
            vector<vector<int>> vect;
            vect.push_back({1});
            vect.push_back({1, 1});
            for (int i = 2; i < rowIndex+1; i++) {
                vector<int> itr;
                itr.push_back(1);
                for (int j = 1; j < i; j++) {
                    itr.push_back((vect[i - 1][j - 1] + vect[i - 1][j]));
                }
                itr.push_back(1);
                vect.push_back({itr});
            }
            return vect[rowIndex];
        }
        
    }
};
