class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int balance=0;
        int defict=0;//kami jo bhi hai balance  me  neg ke liye
        for(int i=0;i<gas.size();i++){
            balance+=gas[i]-cost[i];
            if(balance<0){//agar negative aa rha hai to
                defict+=balance;
                start=i+1;
                balance=0;
            }
        }
        if(defict+balance>=0){
            return start;
        }
        else{
            return -1;
        }

        
    }
};