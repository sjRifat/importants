class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(vector<int>v,int k,int n,int st){
        if(v.size()==k){
            if(n==0) ans.push_back(v);
            return;
        }
        
        for(int i=st;i<=9;i++){
            v.push_back(i);
            backtrack(v,k,n-i,i+1);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        backtrack({},k,n,1);
        return ans;
    }
};
