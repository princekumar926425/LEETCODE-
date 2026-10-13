class Solution {
public:
    long long minimumSteps(string s) {
        long long n = s.size();
        // given string then 0 and 1  white and black ball
        long long i = 0;
    long long  j = n - 1;
        long long  cnt = 0;
        while (i < j) {
            if (i < j && s[i] == '0') {
                i++;
            } else if (i < j && s[j] == '1') {
                j--;
            } else {
                cnt += j - i;
                i++;
                j--;
            }
        }
        return cnt;
    }
};