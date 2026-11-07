class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
        int totalApple = 0;

        for(int x : apple) {
            totalApple += x;
        }

        sort(capacity.begin(), capacity.end(), greater<int>());

        int boxes = 0;
        int curr = 0;

        for(int cap : capacity) {
            curr += cap;
            boxes++;

            if(curr >= totalApple) {
                return boxes;
            }
        }

        return boxes;
    }
};