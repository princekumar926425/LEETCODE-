class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans1;
        vector<int> ans2;

        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;

        for (int i = 0; i < nums1.size(); i++) {
            mp1[nums1[i]]++;
        }

        for (int i = 0; i < nums2.size(); i++) {
            mp2[nums2[i]]++;
        }

        // ab check karna hai ki nums1 ke element nums2 me nhi hai
        for (auto it : mp1) {
            int num = it.first;

            if (mp2.find(num) == mp2.end()) {
                ans1.push_back(num);
            }
        }

        // ab check karna hai ki nums2 ke element nums1 me nhi hai
        for (auto it : mp2) {
            int num = it.first;

            if (mp1.find(num) == mp1.end()) {
                ans2.push_back(num);
            }
        }

        return {ans1, ans2};
    }
};