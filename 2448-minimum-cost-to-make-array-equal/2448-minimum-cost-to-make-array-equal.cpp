class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long n = nums.size();
        // create an arary to find together pairs and value/cost
        vector<pair<int, int>> arr;
        long long totlweight = 0;
        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], cost[i]});
            totlweight += cost[i]; // total weight
        }
        sort(arr.begin(), arr.end());
        // prefix sum find
        long long prefix = 0;
        int target = arr[0].first;
        for (int i = 0; i < n; i++) {
            prefix += arr[i].second;
            if (prefix * 2 >= totlweight) {
                target = arr[i].first;
                break;
            }
        }
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            ans += 1LL * abs(nums[i] - target) * cost[i];
        }
        return ans;
    }
};