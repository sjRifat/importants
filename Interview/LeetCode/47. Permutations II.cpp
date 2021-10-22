
class Solution {
public:
    void permute(vector<int>& nums,int idx,vector<vector<int>>& ans){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }

        unordered_set<int>st;
        for(int i=idx;i<nums.size();i++){
            if(st.find(nums[i])!=st.end()) continue;
            st.insert(nums[i]);
            swap(nums[idx],nums[i]);
            permute(nums,idx+1,ans);
            swap(nums[idx],nums[i]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        permute(nums,0,ans);
        return ans;
    }
};
