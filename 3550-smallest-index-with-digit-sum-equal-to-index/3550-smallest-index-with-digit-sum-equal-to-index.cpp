class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            //taking index
            int num = nums[i];
            int sum = 0;
            //find sum  of digit
            while (num > 0) {
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
   //sum==i
            if (sum == i) {
                return i;
            }
        }

        return -1;
    }
};