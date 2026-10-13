class Solution {
public:
    bool isAnagram(string s, string t) {
        //gar dono ka length equal nhi hai to return false
        if(s.size() != t.size())
         return false;

        unordered_map<char, int> mp;

        for(char ch : s){
            mp[ch]++;
        }

        for(char ch : t){
            mp[ch]--;
            if(mp[ch] < 0){
                return false;
            }
        }

        return true;
    }
};
