class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=words.size();
        int count=0;
        //simple check karna hai ki  jo bhi string given hai kya 
        //wo prefix se  matching hai 
        for(int i=0;i<n;i++){
          if(words[i].find(pref)==0){
            count+=1;
          }
        }
        return count;
        
    }
};