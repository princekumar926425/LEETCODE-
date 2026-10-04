class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int l = 0;
        int r = 0;
        // hmo   first occurence ka index find karo
        for (int i = 0; i < n; i++) {
            if (word[i] == ch) {
                r = i;
                break;
            }
        }
        // agar nhi mila to return word
        if (r == 0) {
            return word;
        }
        while (l < r) {
            swap(word[l], word[r]);
            l++;
            r--;
        }

        return word;
    }
};