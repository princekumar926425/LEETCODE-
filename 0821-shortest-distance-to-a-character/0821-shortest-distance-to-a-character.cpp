class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int mini=INT_MAX;
            for(int j=0;j<n;j++){
                if(s[j]==c){
                    int dist=abs(i-j);
                    mini=min(dist,mini);
                }
            }
            ans[i]=mini;
        }
        return ans;
        
    }
};