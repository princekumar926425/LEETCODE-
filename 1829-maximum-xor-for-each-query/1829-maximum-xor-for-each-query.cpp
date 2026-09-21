class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int x = 0;
        vector<int> ans(n);
        int mx = (1 << maximumBit) - 1;

        // XOR of complete array
        for(int i = 0; i < n; i++) {
            x ^= nums[i];
        }

        // Remove elements from right
        for(int i = 0; i < n; i++) {
            ans[i] = x ^ mx;

            x = x ^ nums[n - 1 - i];
        }

        return ans;
    }
};