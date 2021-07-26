class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v(n+1);
        v[0]=0;
        if(n==0) return v;
        v[1]=1;
        if(n==1) return v;
        int i,j,x=1,y=2,z,c=0;
        for(i=2;i<=n;i++){
            if(i<x+y) v[i]=v[i-x];
            else v[i]=v[i-y]+1;
            if(i==y*2-1){
                x<<=1;
                y<<=1;
            }
        }
        return v;
    }
};