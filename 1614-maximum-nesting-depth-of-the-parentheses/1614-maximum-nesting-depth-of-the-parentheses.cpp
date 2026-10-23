class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int open=0;
            int maxprin=0;
        for(int i=0;i<s.size();i++){
            //now check opening brackets

            if(s[i]=='('){
               open++;
               maxprin=max(maxprin,open);
            }
            //closing hai to decreese karte jao
            else if(s[i]==')'){
                open--;
            }
        }
        return maxprin;
        
    }
};