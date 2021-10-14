class Solution {
    bool search(vector<vector<char>>& v,int i,int j,string& s,int idx){
        if(idx==s.size()-1) return true;
        v[i][j]-=65;
        if(i>0 and v[i-1][j]==s[idx+1] and search(v,i-1,j,s,idx+1)) return true;
        if(j>0 and v[i][j-1]==s[idx+1] and search(v,i,j-1,s,idx+1)) return true;
        if(i<v.size()-1 and v[i+1][j]==s[idx+1] and search(v,i+1,j,s,idx+1)) return true;
        if(j<v[0].size()-1 and v[i][j+1]==s[idx+1] and search(v,i,j+1,s,idx+1)) return true;
        v[i][j]+=65;
        return false;
    }
        
public:
    bool exist(vector<vector<char>>& v, string s) {
        int r=v.size(),c=v[0].size(),i,j;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(v[i][j]==s[0] and search(v,i,j,s,0)) return true;
            }
        }
        return false;
    }
};
