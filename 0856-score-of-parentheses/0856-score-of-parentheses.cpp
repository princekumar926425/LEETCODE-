class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        stack<int> st;
        st.push(0);
        int score = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(0);
            } else {
                int x = st.top();
                st.pop();
                if (x == 0) {
                    score = 1;
                } else {
                    score = 2 * x;
                }
                 st.top() += score;
            }
               
            
        }
        return st.top();
    }
};