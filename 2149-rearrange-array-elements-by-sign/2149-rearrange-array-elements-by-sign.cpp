class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int posidx = 0;
        int negidx = 1;
        vector<int> ans(n);
        int i = 0;
        int j=0;

        while (i < n&&j<n) {
            if (nums[i] > 0) {
                ans[posidx] = nums[i];
                posidx += 2;
            } else {
                ans[negidx] = nums[j];
                negidx += 2;
            }
            i++;
            j++;
        }
        return ans;
    }
};
