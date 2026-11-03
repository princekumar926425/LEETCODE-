class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());

        vector<int> ans(st.begin(), st.end());

        sort(ans.begin(), ans.end(), greater<int>());

        if(ans.size() > k) {
            ans.resize(k);
        }

        return ans;
    }
};