class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int pos=0;
        int neg=1;
        int i=0;
        int j=0;
        vector<int>ans(n);
        while(i<n && j<n){
            if(nums[i]>0){
                ans[pos]=nums[i];
                pos+=2;
            }
            else{
                ans[neg]=nums[i];
                neg+=2;
            }
            i++;
            j++;
        }
        return ans;
        
    }
};