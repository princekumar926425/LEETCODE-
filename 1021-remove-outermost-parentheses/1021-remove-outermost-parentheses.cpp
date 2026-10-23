class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int open = 0;

        for(char ch : s) {
            if(ch == '(') {
                //kya hm open bracket ke andar hai
                if(open > 0) ans += ch;
                open++;
            }
            else {
                open--;
                if(open > 0) ans += ch;
            }
        }
        return ans;
    }
};