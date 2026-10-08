class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;

        for (string c : details) {
            string age = c.substr(11, 2);

            if (stoi(age) > 60) {
                cnt++;
            }
        }

        return cnt;
    }
};