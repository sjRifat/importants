class Solution {
public:
    int dp[101];
    int maxRob(vector<int>& nums,int idx){
        if(idx==nums.size()-1) return nums[idx];
        if(idx>nums.size()-1) return 0;
        if(dp[idx]!=-1) return dp[idx];
        
        return dp[idx]=max(nums[idx]+maxRob(nums,idx+2),maxRob(nums,idx+1));
    }
    
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return maxRob(nums,0);
    }
};
