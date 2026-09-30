class Solution {
public:
    int romanToInt(string s) {
        int last_val = 0;
        int sum = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            int new_add = 0;
            if (s[i] == 'I')
                new_add = 1;
            else if (s[i] == 'V')
                new_add = 5;
            else if (s[i] == 'X')
                new_add = 10;
            else if (s[i] == 'L')
                new_add = 50;
            else if (s[i] == 'C')
                new_add = 100;
            else if (s[i] == 'D')
                new_add = 500;
            else if (s[i] == 'M')
                new_add = 1000;

            if (new_add < last_val)
                sum -= new_add;
            else
                sum += new_add;

            last_val = new_add;
        }

        return sum;
    }
};