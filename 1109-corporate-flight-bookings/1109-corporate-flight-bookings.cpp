class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {

        vector<int> diff(n + 1, 0);

        for (auto &it : bookings) {
            int first = it[0];
            int last = it[1];
            int seats = it[2];

            diff[first - 1] += seats;

            if (last < n)
                diff[last] -= seats;
        }

        vector<int> ans(n);

        ans[0] = diff[0];

        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] + diff[i];
        }

        return ans;
    }
};