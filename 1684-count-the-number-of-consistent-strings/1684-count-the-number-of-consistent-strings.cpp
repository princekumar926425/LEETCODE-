class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        unordered_set<char> st;
        
        // allowed characters store karo
        for(char ch : allowed) {
            st.insert(ch);
        }
        
        int count = 0;
        
        // har word check karo
        for(string word : words) {
            
            bool valid = true;
            
            for(char ch : word) {
                if(st.find(ch) == st.end()) {
                    valid = false;
                    break;
                }
            }
            
            if(valid) {
                count++;
            }
        }
        
        return count;
    }
};