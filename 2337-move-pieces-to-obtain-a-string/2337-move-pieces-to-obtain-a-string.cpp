class Solution {
public:
    bool canChange(string start, string target) {
        int n = start.size();
        int i = 0;
        int j = 0;
        // check kya start me _ hai
        while (i < n ||j < n) {
            // start string me empty hai
            while (i < n && start[i] == '_') {
                i++;
            }
            // target - hai to
            while (j < n && target[j] == '_') {
                j++;
            }
            if (i == n && j == n) {
                return true;
            }
            // agar dono equal nhi hai to
            if (start[i] != target[j]) {
                return false;
            }
            // l right move side nhi karskta 
            if (start[i] == 'L' && i < j) {
                return false;
            }
            // R hoga leftside move nhi kata
            if (start[i] == 'R' && i > j) {
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};