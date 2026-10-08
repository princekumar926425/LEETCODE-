class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            // compare karneg kya left aur right character sam ehai kya
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            // yaha bhi rihght se left check karenge ki kya equal hai ki nhi
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            // kya A and a dono equal hai
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
