class Solution {
public:
    void backtrack(vector<vector<int>>& ans,vector<int>& nums,vector<int>& v,vector<bool>& vis){
        if(v.size()==nums.size()){
            ans.push_back(v);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(!vis[i]){
                vis[i]=true;
                v.push_back(nums[i]);
                backtrack(ans,nums,v,vis);
                vis[i]=false;
                v.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<bool>vis(nums.size(),false);
        vector<int>v;
        backtrack(ans,nums,v,vis);
        return ans;
    }
};
