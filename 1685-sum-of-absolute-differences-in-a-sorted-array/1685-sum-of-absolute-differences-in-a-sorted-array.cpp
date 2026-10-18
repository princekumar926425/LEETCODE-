
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);

        // prefix sum
        prefix[0] = nums[0];

        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + nums[i];
        }

        // suffix sum
        suffix[n-1] = nums[n-1];

        for(int i = n-2; i >= 0; i--) {
            suffix[i] = suffix[i+1] + nums[i];
        }

        for(int i = 0; i < n; i++) {
            int left = 0, right = 0;
            //left ka 
            if(i > 0) {
                left = nums[i] * i - prefix[i-1];
            }
   //right ka
            if(i < n-1) {
                right = suffix[i+1] - nums[i] * (n-i-1);
            }

            ans.push_back(left + right);
        }

        return ans;
    }
};
