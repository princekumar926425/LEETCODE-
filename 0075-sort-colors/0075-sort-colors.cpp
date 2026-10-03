class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        //using dutch flag algo
        int i=0;//0 ke liye
        int j=n-1;//2 ke liye
        int k=0;//1 ke liye
        while(k<=j){
            if(nums[k]==0){
                swap(nums[i],nums[k]);
                k++;
                i++;
            }
            else if(nums[k]==1){
                k++;
            }
            else{//==2 hota 
                swap(nums[k],nums[j]);
                j--;
            }
        }

        
    }
};