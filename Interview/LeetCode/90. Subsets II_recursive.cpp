class Solution {
    void subset(int idx,vector<int>& nums,vector<int>& v,vector<vector<int>>& ans,bool pre){
        if(idx==nums.size()){
            ans.push_back(v);
            return;
        }
        subset(idx+1,nums,v,ans,false);
        if(idx>0 and nums[idx]==nums[idx-1] and !pre) return;
        
        v.push_back(nums[idx]);
        subset(idx+1,nums,v,ans,true);
        v.pop_back();
        
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>v;
        subset(0,nums,v,ans,false);
        return ans;
    }
};
