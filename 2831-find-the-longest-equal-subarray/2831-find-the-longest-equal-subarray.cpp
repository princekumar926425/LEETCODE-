class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int r = 0;
        int l = 0;
        int maxlen = 0;
        int maxfreq = 0;

        unordered_map<int, int> mp1;

        // using sliding window
        while (r < n) {

            mp1[nums[r]]++;

            maxfreq = max(maxfreq, mp1[nums[r]]);

            // window invalid hai to left se elements remove karo
            while (r - l + 1 - maxfreq > k) {
                mp1[nums[l]]--;
                l++;
            }

            maxlen = max(maxlen, maxfreq);

            r++;
        }

        return maxlen;
    }
};