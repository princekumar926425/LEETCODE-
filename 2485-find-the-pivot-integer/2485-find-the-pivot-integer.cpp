class Solution {
public:
    int pivotInteger(int n) {
        
        for(int x = 1; x <= n; x++) {
            
            int leftSum = 0;
            int rightSum = 0;
            // 1 to n

            for(int i = 1; i <= x; i++) {
                leftSum += i;
            }
            
            // x to n
            for(int i = x; i <= n; i++) {
                rightSum += i;
            }
            
            if(leftSum == rightSum) {
                return x;
            }
        }
        
        return -1;
    }
};