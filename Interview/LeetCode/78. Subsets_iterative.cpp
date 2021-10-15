class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        ans.push_back(v);
        int i,j,n;
        for(i=0;i<(int)nums.size();i++){
            n=ans.size();
            for(j=0;j<n;j++){
                v=ans[j];
                v.push_back(nums[i]);
                ans.push_back(v);
            }
        }
        return ans;
    }
};
