class Solution {
public:
    map<pair<int,int>,int>dp;
    int how(vector<int>& nums,int tgt,int total,int idx){
        if(idx==nums.size()){
            if(total==tgt) return 1;
            else return 0;
        }
        if(dp.find({total,idx})!=dp.end()) return dp[{total,idx}];
        
        dp[{total,idx}]=how(nums,tgt,total+nums[idx],idx+1)+how(nums,tgt,total-nums[idx],idx+1);
        return dp[{total,idx}];
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        return how(nums,target,0,0);
    }
};
