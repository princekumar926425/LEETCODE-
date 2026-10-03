class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n = plants.size();
        int i = 0;
        int j = n - 1;
        int waterA = capacityA;
        int waterB = capacityB;
        int cnt = 0;
        while (i < j) {
            // yaha alice ke liye  karenge
            if (waterA < plants[i]) {
                cnt++;
                waterA = capacityA;
            }
            waterA -= plants[i];
            i++;
            // yaha bob ke liye
            if (waterB < plants[j]) {
                cnt++;
                waterB = capacityB;
            }
            waterB -= plants[j];
            j--;
        }
        // agar equal hoga to
        if (i == j) {
            if (max(waterA, waterB) < plants[i]) {
                cnt++;
            }
        }
        return cnt;
    }
};