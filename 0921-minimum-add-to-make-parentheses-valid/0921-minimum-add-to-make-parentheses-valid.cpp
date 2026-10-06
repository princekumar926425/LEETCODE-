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
            //target hai valid string banana hai()
            //now chcek kakrlo ki kya  close ke bad open mil raha hai
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