class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {

        int n = beans.size();

        sort(beans.begin(), beans.end());

        vector<long long> prefix(n);

        prefix[0] = beans[0];

        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + beans[i];
        }

        long long total = prefix[n - 1];
        long long ans = LLONG_MAX;

        for(int i = 0; i < n; i++) {

            long long left = 0;
            if(i > 0) {
                left = prefix[i - 1];
            }

            long long right =
                (total - prefix[i])
                - 1LL * beans[i] * (n - i - 1);

            ans = min(ans, left + right);
        }

        return ans;
    }
};