class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        unordered_map<char,int>mp;
        int l=0;
        int r=0;
        int maxfre=0;
        int ans=0;
        while(r<n){
            mp[s[r]]++;
           maxfre=max(maxfre,mp[s[r]]);
            if((r-l+1)-maxfre >k){
                mp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};