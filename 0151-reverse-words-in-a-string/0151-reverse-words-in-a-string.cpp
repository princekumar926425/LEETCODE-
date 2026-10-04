class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        // ekbar pura sentence ko reverse krden ahai
        reverse(s.begin(), s.end());
        // ab har word ko reverse karna hai
        int i = 0;

        int l = 0, r = 0; // har ek word pe move karna hai  l------r

        while (i < n) {
            while (i < n && s[i] !=' ') {
                s[r] = s[i];
                r++;
                i++;
            }
            if (l < r) {
                reverse(s.begin() + l, s.begin() + r);
                s[r] =' ';
                r++;
                //for new words
                l = r;
            }
          i++;
        }
          s = s.substr(0, r - 1);
            return s;
    }
};