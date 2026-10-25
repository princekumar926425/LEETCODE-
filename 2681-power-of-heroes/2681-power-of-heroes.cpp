class Solution {
public:
    int sumOfPower(vector<int>& nums) {
        long long mod = 1e9 + 7;

        sort(nums.begin(), nums.end());

        long long ans = 0;
        long long pref = 0;

        for(long long x : nums) {

            ans = (ans + x * x % mod * ((x + pref) % mod)) % mod;

            pref = (pref * 2 + x) % mod;
        }

        return ans;
    }
};