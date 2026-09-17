class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;

        int mini = INT_MAX;
        int maxi = INT_MIN;
        //check maximum and mini
        for (int i = 0; i < n; i++) {
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] > mini && nums[i] < maxi) {
                cnt++;
            }
        }

        return cnt;
    }
};