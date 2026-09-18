class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        // given index 1     check karna hai ki n kisse divisor hai
        int n=nums.size();
        int ans=0;
        for(int i=1;i<=n;i++){
            // given condition n%i==0
            if(n%i==0){
                ans+=nums[i-1]*nums[i-1];

            }
        }
        return ans;
        
    }
};