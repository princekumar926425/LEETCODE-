class Solution {
public:
    //now calculate the lasgest reactangle histogram
    int largestreactanglearea(vector<int>&nums){
        int n=nums.size();
        vector<int>left(n),right(n);
        stack<int>st;
        //privious smaller
        for(int i=0;i<n;i++){
            while(!st.empty()&&nums[st.top()]>=nums[i]){
                st.pop();
            }
            if(st.empty()){
                left[i]=-1;
            }
            else{
                left[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        //next smaller
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&nums[st.top()]>nums[i]){
                st.pop();
            }
            if(st.empty()){
                right[i]=n;
            }
            else{
                right[i]=st.top();
            }
            st.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int width=right[i]-left[i]-1;
            ans=max(ans,nums[i]*width);
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();
         if(m==0){
            return 0;
        }
        int n=matrix[0].size();
       
        vector<int>heights(n,0);
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1'){
                    heights[j]=heights[j]+1;
                }
                else{
                    heights[j]=0;
                }
            }
            ans=max(ans,largestreactanglearea(heights));
        }
        return ans;
    }
};