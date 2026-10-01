class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int  sum=0;
        unordered_map<char,int>mp;
        for(int i=0;i<t.size();i++){
            mp[t[i]]=i;
        }
        for(int i=0;i<s.size();i++){
            sum+=abs(i-mp[s[i]]);
        }
        return sum;

        
    }
};