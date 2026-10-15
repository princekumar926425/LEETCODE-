class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int cnt = 0;
        int n = pairs.size();
      //sorting phle aur ending in given intervalse pairs
        sort(pairs.begin(), pairs.end(), [](vector<int>& s1, vector<int>& s2) {
            return s1[1] < s2[1];
        });

        int last = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (pairs[i][0] > last) {
                cnt++;
                last = pairs[i][1];
            }
        }

        return cnt;
    }
};