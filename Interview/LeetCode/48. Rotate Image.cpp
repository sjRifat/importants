class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        int i,j,n=v.size();
        for(i=0;i<n;i++){
            for(j=0;j<i;j++)
                swap(v[i][j],v[j][i]);
        }
        for(i=0;i<n;i++){
            for(j=0;j<(n/2);j++)
                swap(v[i][j],v[i][n-j-1]);
        }
    }
};
