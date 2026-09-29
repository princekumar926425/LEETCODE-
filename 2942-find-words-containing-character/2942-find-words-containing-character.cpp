class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        //sbse phle  hmko  ek lopp used karke words ka size ke liey
        for(int i=0;i<words.size();i++){
            for(char ch:words[i]){
                // l-l==x not 
                //e-e==x yes return i;
                if(ch==x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
        
    }
};