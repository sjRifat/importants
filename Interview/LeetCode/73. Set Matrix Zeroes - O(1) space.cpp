class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int i,j,k;
        for(i=0;i<v.size();i++){
            for(j=0;j<v[i].size();j++){
                if(v[i][j]==0) v[i][j]=-11020319;
            }
        }
        
        for(i=0;i<v.size();i++){
            for(j=0;j<v[i].size();j++){
                if(v[i][j]==-11020319){
                    v[i][j]=0;
                    for(k=0;k<v[i].size();k++){
                        if(v[i][k]!=-11020319) v[i][k]=0;
                    }
                    for(k=0;k<v.size();k++){
                        if(v[k][j]!=-11020319) v[k][j]=0;
                    }
                }
            }
        }
        return;
    }
};
