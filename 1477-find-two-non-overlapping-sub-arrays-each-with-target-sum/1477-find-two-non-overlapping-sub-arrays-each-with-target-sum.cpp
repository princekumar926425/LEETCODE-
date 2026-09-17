class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();

        vector<int> best(n, INT_MAX);

        int l = 0;
        int r = 0;
        int sum = 0;

        int ans = INT_MAX;
        int minlen = INT_MAX;

        // using sliding window
        while (r < n) {

            sum += arr[r];

            // agr sum outof range to left se hatao
            while (sum > target) {
                sum -= arr[l];
                l++;
            }

            // ab hmko previous ka 2 lana hai
            if (r > 0) {
                best[r] = best[r - 1];
            }

            // ab overlapping condition check karna hai
            if (sum == target) {

                int len = r - l + 1;

                if (l > 0 && best[l - 1] != INT_MAX) {
                    ans = min(ans, len + best[l - 1]);
                }

                minlen = min(minlen, len);

                best[r] = min(best[r], minlen);
            }

            r++;
        }

        if (ans == INT_MAX) {
            return -1;
        }

        return ans;
    }
};