class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for (char ch : num) {
            // agar next digit chhota hai to bada digit hata do
            while (!st.empty() && k > 0 && st.top() > ch) {
                st.pop();
                k--;
            }
            st.push(ch);
        }

        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        if (st.empty()) {
            return "0";
        }

        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        // leading zeroes remove
        while (!ans.empty() && ans[0] == '0') {
            ans.erase(ans.begin());
        }

        if (ans.empty()) {
            return "0";
        }

        return ans;
    }
};