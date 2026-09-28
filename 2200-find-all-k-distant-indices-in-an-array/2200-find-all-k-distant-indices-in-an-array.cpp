class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> ans;

        int j = 0;

        for(int i = 0; i < n; i++) {

            while(j < n && nums[j] != key) {
                j++;
            }

            if(j < n && i > j + k) {
                j++;
                
                while(j < n && nums[j] != key) {
                    j++;
                }
            }

            if(j < n && abs(i - j) <= k) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};