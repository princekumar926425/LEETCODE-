
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        long long sum = 0;
        long long ans = 0;

        unordered_map<int, int> mp;

        for (int r = 0; r < n; r++) {
            sum += nums[r];
            mp[nums[r]]++;

            // Window ki length k se badi hai
            if (r - l + 1 > k) {
                sum -= nums[l];
                mp[nums[l]]--;

                if (mp[nums[l]] == 0) {
                    mp.erase(nums[l]);
                }

                l++;
            }

            // Length k aur saare elements distinct
            if (r - l + 1 == k && mp.size() == k) {
                ans = max(ans, sum);
            }
        }

        return ans;
    }
};
