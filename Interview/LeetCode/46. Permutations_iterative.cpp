class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        ans.push_back({nums[0]});
        for(int i=1;i<(int)nums.size();i++){
            int n=ans.size();
            for(int j=0;j<=i;j++){
                for(int k=0;k<n;k++){
                    vector<int>v=ans[k];
                    v.insert(v.begin()+j,nums[i]);
                    ans.push_back(v);
                }
            }
            while(ans[0].size()==i) ans.erase(ans.begin());
        }
        return ans;
    }
};
