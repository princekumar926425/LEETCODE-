class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();

        if (n % 2)//even length
            return false;

        int balance = 0;

        // Left to right opening brackets 
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || locked[i] == '0')
                balance++;
            else
                balance--;

            if (balance < 0)
                return false;
        }

        balance = 0;

        // Right to Left closing bracket 
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ')' || locked[i] == '0')
                balance++;
            else
                balance--;

            if (balance < 0)
                return false;
        }

        return true;
    }
};