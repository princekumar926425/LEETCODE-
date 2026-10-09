class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(') {
                st.push('(');
            } else {

                // check karo ki )) hai ya nahi
                if (s[i + 1] == ')') {
                    i++;
                } else {
                    // single ) mila
                    ans++;
                }

                if (!st.empty()) {
                    st.pop();
                } else {
                    ans++;
                }
            }
           
        }
         ans += 2 * st.size();
         return ans;
    }
};