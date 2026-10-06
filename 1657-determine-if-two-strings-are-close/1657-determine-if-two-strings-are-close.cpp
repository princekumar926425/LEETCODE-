class Solution {
public:
    bool closeStrings(string word1, string word2) {

        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(char c : word1){
            mp1[c]++;
        }

        for(char c : word2){
            mp2[c]++;
        }

        vector<int> ans1, ans2;

        // now check kya mp1 me mp2 ke value same hai
        for(auto c : mp1){
            if(mp2.find(c.first) == mp2.end()){
                return false;
            }
            ans1.push_back(c.second);
        }
        // now check karlo kya mp2 me mp1 ke value same hai

        for(auto c : mp2){
            if(mp1.find(c.first) == mp1.end()){
                return false;
            }
            ans2.push_back(c.second);
        }

        sort(ans1.begin(), ans1.end());
        sort(ans2.begin(), ans2.end());

        return ans1 == ans2;
    }
};