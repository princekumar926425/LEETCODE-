class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n = tasks.size();
        int finishtime = INT_MAX;

        for(int i = 0; i < n; i++) {
            finishtime = min(finishtime, tasks[i][0] + tasks[i][1]);
        }

        return finishtime;
    }
};