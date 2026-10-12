class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long n=nums.size();
        long long cnt=0;
        long long l=0;
        long long r=0;
        long long ans=0;
        //using map to cnt a frequenty of given arary
        unordered_map<int,int>mp;
        for(r=0;r<n;r++){
            //freq cnt karna hai hme
            cnt+=mp[nums[r]];
            mp[nums[r]]++;
            //  subarray arr is good if there are at least k 
            while(cnt>=k){
                ans+=n-r;
                //window ko shrink kardo aur  decress karte jao cnt ko
                mp[nums[l]]--;
                cnt-=mp[nums[l]];
                l++;
            }
        }
        return ans;
        
    }
};