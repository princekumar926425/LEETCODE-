class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> mp;

        int n = sentence.size();

        // Har character k0 count kar liye 
        for(int i = 0; i < n; i++) {
            mp[sentence[i]]++;
        }

        // Check a-z ke saare characters present hain ya nahi
        for(char ch = 'a'; ch <= 'z'; ch++) {
            //agr map me nhi mile to return false
            if(mp.find(ch) == mp.end()) {
                return false;
            }
        }

        return true;
    }
};