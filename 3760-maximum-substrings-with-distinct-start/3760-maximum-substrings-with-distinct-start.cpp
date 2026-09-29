class Solution {
public:
    int maxDistinct(string s) {  
        int maxi=0;                                       
        // now ab check karn ahai district element 
       // using map to check district element
       unordered_map<char,int>mp;
       for(char ch:s){
        mp[ch]++;
       }
       

        return mp.size();
    }
};