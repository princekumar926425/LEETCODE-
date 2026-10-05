class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.size();
        int open=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open++;
            }
            else{//agar close mile to )
            open--;
            
            if(s[i-1]=='('){
                ans+=pow(2,open);
            }
            }
        }
        return ans;
    }
};