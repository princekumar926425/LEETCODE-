class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int i = 0;
        int j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            // agr  i and j equal hai to
            if (nums1[i][0] == nums2[j][0]) {
                ans.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++;
                j++;

            }
            // agar i<j ho to
            else if (nums1[i][0] < nums2[j][0]) {
                ans.push_back(nums1[i]);
                i++;
            }
            // i>j ho to
            else {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        // baki i++
        while (i < nums1.size()) {
            ans.push_back(nums1[i++]);
        }
        // j++
        while (j < nums2.size()) {
            ans.push_back(nums2[j++]);
        }
        return ans;
    }
};