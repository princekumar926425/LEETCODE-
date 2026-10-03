class Solution {
public:
    int nextGreaterElement(int n) {
        //using next permutationand int flow overcheck
        string s = to_string(n);
        int len = s.size();

        int ind = -1;

        for (int i = len - 2; i >= 0; i--) {
            if (s[i] < s[i + 1]) {
                ind = i;
                break;
            }
        }

        if (ind == -1) {
            return -1;
        }

        for (int i = len - 1; i > ind; i--) {
            if (s[i] > s[ind]) {
                swap(s[i], s[ind]);
                break;
            }
        }

        reverse(s.begin() + ind + 1, s.end());

        long long ans = stoll(s);

        if (ans > INT_MAX) {
            return -1;
        }

        return (int)ans;
    }
};