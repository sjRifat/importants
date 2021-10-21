class Solution {
public:
    void combine(int idx,vector<int>& candidates,int target,vector<int>& v,vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(target<0 or idx==candidates.size()) return;
        combine(idx+1,candidates,target,v,ans);
        v.push_back(candidates[idx]);
        combine(idx,candidates,target-candidates[idx],v,ans);
        v.pop_back();
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        vector<vector<int>>ans;
        combine(0,candidates,target,v,ans);
        return ans;
    }
};
