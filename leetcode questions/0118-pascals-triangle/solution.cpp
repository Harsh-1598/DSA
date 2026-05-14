class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vect;
        if (numRows == 0)
            return vect;
        else if (numRows == 1) {
            vect.push_back({1});
            return vect;
        } else {
            vect.push_back({1});
            vect.push_back({1, 1});
            for (int i = 2; i < numRows; i++) {
                vector<int> itr;
                itr.push_back(1);
                for (int j = 1; j < i; j++) {
                    itr.push_back((vect[i - 1][j - 1] + vect[i - 1][j]));
                }
                itr.push_back(1);
                vect.push_back({itr});
            }
            return vect;
        }
    }
};
