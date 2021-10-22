class Solution {
public:
    void combine(vector<int>v,int idx,int tgt,vector<int>& cd,vector<vector<int>>& ans){
        if(tgt==0) ans.push_back(v);
        if(tgt<=0) return;
        
        int prev=-1;
        for(int i=idx;i<cd.size();i++){
            if(cd[i]==prev) continue;
            v.push_back(cd[i]);
            combine(v,i+1,tgt-cd[i],cd,ans);
            v.pop_back();
            prev=cd[i];
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        combine({},0,target,candidates,ans);
        return ans;
    }
};
