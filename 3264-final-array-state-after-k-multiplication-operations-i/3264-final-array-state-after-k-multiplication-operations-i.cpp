class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();

        // k operations perform karni hain
        for(int op = 0; op < k; op++) {

            // minimum element ka index
            int miniindex = 0;

            for(int i = 1; i < n; i++) {
                if(nums[i] < nums[miniindex]) {
                    miniindex = i;
                }
            }
            // minimum element ko multiply karo
            nums[miniindex] *= multiplier;
        }

        return nums;
    }
};