class Solution {
public:
    int missingNumber(vector<int>& v) {
        int i,sm=0,n=v.size();
        for(i=0;i<n;i++) sm+=v[i];
        return (n*(n+1))/2-sm;
    }
};
