class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        // sbse phle hm dekhenge ki kya mera stack empty to nhi hai an
        if (!st.empty()) {
            return 0;
        }
        // then check a opening pare theesis bracket
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            // ab check karo kya stack empty to nhi na hai
            else if (st.empty()) {
                return false;
            } else if (s[i] == ')' && st.top() == '(' ||
                       s[i] == '}' && st.top() == '{' ||
                       s[i] == ']' && st.top() == '[') {
                st.pop();
            } else {
                return false;
            }
        }
        return st.empty();
    }
};