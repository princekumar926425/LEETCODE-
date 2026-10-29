class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> diff(1001, 0);

        //  Difference array
        for (auto &trip : trips) {
            int passengers = trip[0];
            int start = trip[1];
            int end = trip[2];

            diff[start] += passengers;
            diff[end] -= passengers;
        }

        //  Prefix sum
        int passengers = 0;

        for (int i = 0; i < 1001; i++) {
            passengers += diff[i];

            if (passengers > capacity) {
                return false;
            }
        }

        return true;
    }
};