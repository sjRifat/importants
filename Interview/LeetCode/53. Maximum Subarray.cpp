class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int i,j,n=v.size();
        int ans=v[0];
        for(i=1;i<n;i++){
            if(v[i-1]+v[i]>v[i]){
                v[i]=v[i-1]+v[i];
            }
            ans=max(ans,v[i]);
        }
        return ans;
    }
};