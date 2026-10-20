class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=0;
        int i=0;
        int j=0;
        while(j<n){
            if(nums[j]>nums[i]){
                i++;
                cnt++;
            }
            j++;
           
        }
        return cnt;
        
    }
};