class Solution {
public:
    bool found(vector<int>& arr2, int target, int d) {
        int s = 0;
        int e = arr2.size() - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (abs(arr2[mid] - target) <= d) {
                return true;
            }

            if (arr2[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return false;
    }

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        sort(arr2.begin(), arr2.end());

        int cnt = 0;

        for (int i = 0; i < arr1.size(); i++) {
            if (!found(arr2, arr1[i], d)) {
                cnt++;
            }
        }

        return cnt;
    }
};
