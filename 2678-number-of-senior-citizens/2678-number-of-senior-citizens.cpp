class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;

        for (string c : details) {

            string phonenumber = c.substr(0, 10);
            char gender = c[10];
            string age = c.substr(11, 2);
            string seat = c.substr(13, 2);

            int ageNum = stoi(age);

            // age greater than 60
            if (ageNum > 60) {
                cnt++;
            }
        }

        return cnt;
    }
};