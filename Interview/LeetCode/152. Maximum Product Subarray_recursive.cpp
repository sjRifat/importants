class Solution {
public:
    int mx=INT_MIN;
    map<int,map<int,int>>dp;
    int rec(int temp,vector<int>& nums,int idx){
        if(idx==nums.size()-1) return max(mx,temp*nums[idx]);
        if(dp[temp][idx]!=0) return dp[temp][idx];
        
        int res1=rec(temp*nums[idx],nums,idx+1);
        int res2=rec(1,nums,idx+1);
        mx=max({temp*nums[idx],res1,mx,res2});
        return dp[temp][idx]=mx;
    }
    
    int maxProduct(vector<int>& nums) {
        return rec(1,nums,0);
    }
};
