class Solution {
    void subset(int idx,vector<int>& nums,vector<int>& v,vector<vector<int>>& ans){
        if(idx==nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[idx]);
        subset(idx+1,nums,v,ans);
        v.pop_back();
        subset(idx+1,nums,v,ans);
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        subset(0,nums,v,ans);
        return ans;
    }
};
