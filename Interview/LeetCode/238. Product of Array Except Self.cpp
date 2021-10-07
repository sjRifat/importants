class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int i,n=v.size(),m=1;
        vector<int>ans;
        ans.push_back(1);
        for(i=0;i<n-1;i++){
            m*=v[i];
            ans.push_back(m);
        }
        m=1;
        for(i=n-1;i>0;i--){
            m*=v[i];
            ans[i-1]*=m;
        }
        return ans;
    }
};
