class Solution {
public:
    int bestClosingTime(string customers) {
        //prefix N cnt
                int n = customers.size();

        vector<int> prefixn(n+1, 0);
        for (int i = 0; i < n; i++) {
            prefixn[i + 1] = prefixn[i];
            if (customers[i] == 'N') {
                prefixn[i + 1]++;
            }
        }
        //suffix Y cnt
        vector<int> suffixn(n+1, 0);
        for (int i = n - 1; i >= 0; i--) {
            suffixn[i] = suffixn[i + 1];
            if (customers[i] == 'Y') {
                suffixn[i]++;
            }
        }
        int mini = INT_MAX;
        int ans = 0;
        //total penality
        for (int j = 0; j <= n; j++) {
            int penality = prefixn[j] + suffixn[j];

            if (penality < mini) {
                mini = penality;
                ans = j;
            }
        }

        return ans;
    }
};