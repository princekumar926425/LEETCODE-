class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        int  l=0;
        int r=0;
        while(i<n){
            if(s[i]==' '){
                r=i;
                reverse(s.begin()+l,s.begin()+r);
                l=r+1;
            }
            i++;
        }
        reverse(s.begin()+l,s.end());
        return s;
        
    }
};