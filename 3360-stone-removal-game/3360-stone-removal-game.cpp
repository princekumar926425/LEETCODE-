class Solution {
public:
    bool canAliceWin(int n) {
        int  stone=10;

        int cnt=0;
        while(n>=stone){
            n=n-stone;
            stone--;
            cnt++;
        }
        return cnt%2==1;
        
    }
};