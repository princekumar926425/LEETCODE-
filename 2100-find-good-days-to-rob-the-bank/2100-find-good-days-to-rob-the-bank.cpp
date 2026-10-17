
class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        vector<int> ans;
        int n = security.size();

        // Agar time 0 hai
        if (time == 0) {
            for (int i = 0; i < n; i++) {
                ans.push_back(i);
            }
            return ans;
        }

        // Left se right  non-increasing condition
        vector<int> prefix(n, 0);

        for (int i = 1; i < n; i++) {
            if (security[i - 1] >= security[i]) {
                prefix[i] = prefix[i - 1] + 1;
            }
        }

        // Right se left  non-decreasing condition
        vector<int> suffix(n, 0);

        for (int i = n - 2; i >= 0; i--) {
            if (security[i] <= security[i + 1]) {
                suffix[i] = suffix[i + 1] + 1;
            }
        }

        // Dono conditions check karo
        for (int i = time; i < n - time; i++) {
            if (prefix[i] >= time && suffix[i] >= time) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
