class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;

        unordered_map<int,int> mp;

        for(int num : nums){
            mp[num]++;
        }

        vector<pair<int,int>> v;

        for(auto x : mp){
            v.push_back({x.first, x.second});
        }

        // frequency ke basis par descending sort
        sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
            return a.second > b.second;
        });

        for(int i = 0; i < k; i++){
            ans.push_back(v[i].first);
        }

        return ans;
    }
};