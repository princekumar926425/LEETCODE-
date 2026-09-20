class Solution {
public:
    bool isPowerOfTwo(int n) {
        //gar n=0 ya negative hoga
        if(n<=0){
            return false;
        }
        long long pow=1;
        while(pow<=n){
            if(pow==n){
                return true;
            }
            pow*=2;
        }
        return false;
    }
};