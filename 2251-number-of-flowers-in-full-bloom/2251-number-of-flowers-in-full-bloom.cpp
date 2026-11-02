class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers,
                                 vector<int>& people) {

        map<int,int> diff;

        for(auto &f : flowers){
            diff[f[0]]++;
            diff[f[1] + 1]--;
        }

        vector<pair<int,int>> pref;
        int curr = 0;

        for(auto &it : diff){
            curr += it.second;
            pref.push_back({it.first, curr});
        }

        vector<int> ans;

        for(int p : people){
            int l = 0, r = pref.size()-1;
            int res = 0;

            while(l <= r){
                int mid = l + (r-l)/2;

                if(pref[mid].first <= p){
                    res = pref[mid].second;
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }

            ans.push_back(res);
        }

        return ans;
    }
};