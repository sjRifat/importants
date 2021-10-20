class Solution {
public:
    void combination(int k,int start,int limit,vector<int> &v,vector<vector<int>> &ans){
        if(!k){
            ans.push_back(v);
            return;
        }
        
        for(int i=start;i<=limit-k+1;i++){
            v.push_back(i);
            combination(k-1,i+1,limit,v,ans);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>v;
        combination(k,1,n,v,ans);
        return ans;
    }
};
