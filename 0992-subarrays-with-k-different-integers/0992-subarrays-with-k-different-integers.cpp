
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        int n = nums.size();

        int l1 = 0;
        int l2 = 0;
        int r = 0;

        int cnt = 0;

        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;

        while(r < n) {

            // AtMost K
            mp1[nums[r]]++;

            // AtMost K-1
            mp2[nums[r]]++;

            // mp1 mein maximum k distinct
            while(mp1.size() > k) {

                mp1[nums[l1]]--;

                if(mp1[nums[l1]] == 0) {
                    mp1.erase(nums[l1]);
                }

                l1++;
            }

            // mp2 mein maximum k-1 distinct
            while(mp2.size() > k - 1) {

                mp2[nums[l2]]--;

                if(mp2[nums[l2]] == 0) {
                    mp2.erase(nums[l2]);
                }

                l2++;
            }

            // Exactly k distinct
            cnt = cnt + (l2 - l1);

            r++;
        }

        return cnt;
    }
};