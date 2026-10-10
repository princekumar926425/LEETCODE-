
class Solution {
public:
    string largestMerge(string word1, string word2) {
        string ans = "";
        int i = 0, j = 0;
        int n = word1.size();
        int m = word2.size();

        while (i < n && j < m) {
            if (word1.substr(i) > word2.substr(j)) {
                ans.push_back(word1[i]);
                i++;
            }
            else {
                ans.push_back(word2[j]);
                j++;
            }
        }

        while (i < n) {
            ans.push_back(word1[i]);
            i++;
        }

        while (j < m) {
            ans.push_back(word2[j]);
            j++;
        }

        return ans;
    }
};
