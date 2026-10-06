class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        int open=0;
        int close=0;
        for(int i=0;i<n;i++){
            //open mila to
            if(s[i]=='('){
                open++;
            }
            //empty mila to
            else {
                if(open>0) open--;
            
            else{
                close++;
            }
            }
        }
        return open+close;
        
    }
};