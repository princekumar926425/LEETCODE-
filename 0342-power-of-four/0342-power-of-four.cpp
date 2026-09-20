class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        long long pow=1;
        while(pow<=n){
            if(pow==n){
                return true;
            }
            pow*=4;
        }
        return false;
    }
};