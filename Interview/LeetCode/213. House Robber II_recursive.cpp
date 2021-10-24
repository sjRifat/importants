class Solution {
public:
    int dp[101];
    int maxRob(vector<int>& nums,int idx,int n){
        if(idx==n-1) return nums[idx];
        if(idx>n-1) return 0;
        if(dp[idx]!=-1) return dp[idx];
        
        return dp[idx]=max(nums[idx]+maxRob(nums,idx+2,n),maxRob(nums,idx+1,n));
    }
    
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int x=maxRob(nums,0,nums.size()-1);
        memset(dp,-1,sizeof(dp));
        int y=maxRob(nums,1,nums.size());
        return max({nums[0],x,y});
    }
};
