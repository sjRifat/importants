class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        int i,n=v.size(),m=v[0].size();
        int x=n*m,c=0;
        int lt=-1,lb=v.size(),rt=v[0].size(),rb=v.size();
        vector<int>res;
        while(true){
            for(i=lt+1;i<rt;i++){
                res.push_back(v[lt+1][i]),c++;
            }
            if(c==x) return res;
            for(i=lt+2;i<rb;i++){
                res.push_back(v[i][rt-1]),c++;
            }
            if(c==x) return res;
            for(i=rt-2;i>lt;i--){
                res.push_back(v[rb-1][i]),c++;
            }
            if(c==x) return res;
            for(i=rb-2;i>lt+1;i--){
                res.push_back(v[i][lt+1]),c++;
            }
            if(c==x) return res;
            lt++,rt--,lb--,rb--;
        }
    }
};
