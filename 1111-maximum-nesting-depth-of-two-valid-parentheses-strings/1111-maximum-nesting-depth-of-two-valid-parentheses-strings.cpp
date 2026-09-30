class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int depth=0;
        int n=seq.size();
        vector<int>ans;
        for(char ch:seq){
            //agar opening bracket hoga d=1 ( , now agar phir aayega to( d=2
            // agar closing bracket)d=1.. now kam hoga
            if(ch=='('){
                depth++;
                ans.push_back(depth%2);

            }
            else{
                ans.push_back(depth%2);
                depth--;
            }
        }
        return ans;
        
    }
};