class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        map<vector<int>,bool>mp;
        vector<int>v;
        ans.push_back(v);
        int i,j,n;
        for(i=0;i<(int)nums.size();i++){
            n=ans.size();
            for(j=0;j<n;j++){
                v=ans[j];
                v.push_back(nums[i]);
                sort(v.begin(),v.end());
                if(!mp[v]){
                    ans.push_back(v);
                    mp[v]=true;
                } 
            }
        }
        return ans;
    }
};
