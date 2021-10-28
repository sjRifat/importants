class Solution {
public:
    int solve(vector<int>&coins,int idx,int amnt,vector<vector<int>>&dp){
        if(amnt<0 or idx>=coins.size()) return 1000005;
        if(amnt==0) return 0;
        if(dp[idx][amnt]!=-1) return dp[idx][amnt];
        return dp[idx][amnt] = min(1+solve(coins,idx,amnt-coins[idx],dp),solve(coins,idx+1,amnt,dp));
    }
    
    int coinChange(vector<int>& coins, int amount) {
       vector<vector<int>>dp(coins.size()+5,vector<int>(amount+5,-1));
        int ans = solve(coins,0,amount,dp); 
        return (ans == 1000005)?-1:ans;
    }
};
