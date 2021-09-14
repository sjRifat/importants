class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        vector<vector<int>> vv=v;
        int i,j,k;
        for(i=0;i<v.size();i++){
            for(j=0;j<v[i].size();j++){
                if(vv[i][j]==0){
                    for(k=0;k<v[i].size();k++){
                        v[i][k]=0;
                    }
                    for(k=0;k<v.size();k++){
                        v[k][j]=0;
                    }
                }
            }
        }
        return;
    }
};
