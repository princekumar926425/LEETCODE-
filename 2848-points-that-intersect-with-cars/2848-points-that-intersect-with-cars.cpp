class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int cnt = 0;

        for(int point = 1; point <= 100; point++) {

            for(auto &car : nums) {

                if(point >= car[0] && point <= car[1]) {
                    cnt++;
                    break;
                }
            }
        }

        return cnt;
    }
};