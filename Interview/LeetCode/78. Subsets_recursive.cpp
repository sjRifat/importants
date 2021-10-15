class Solution {
    void subset(vector<int>& nums,int idx,vector<vector<int>>& ans){
        if(idx==nums.size()-1){
            ans.push_back({});
            ans.push_back({nums[idx]});
        }
        else{
            subset(nums,idx+1,ans);
            int n=ans.size();
            for(int i=0;i<n;i++){
                vector<int>v=ans[i];
                v.push_back(nums[idx]);
                ans.push_back(v);
            }
        }
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.empty()) return {{}};
        vector<vector<int>>ans;
        subset(nums,0,ans);
        return ans;
    }
};
