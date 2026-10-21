class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;
        map<char,int> mp;

        for(char ch : p){
            mp[ch]++;
        }

        int l = 0;
        int r = 0;
        int k = p.size();
        int n = s.size();

        while(r < n){

            mp[s[r]]--;

            if(r - l + 1 == k){

                bool prince = true;

                for(auto it : mp){
                    if(it.second != 0){
                        prince = false;
                        break;
                    }
                }

                if(prince){
                    ans.push_back(l);
                }

                mp[s[l]]++;
                l++;
            }

            r++;
        }

        return ans;
    }
};