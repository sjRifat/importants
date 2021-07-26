class Solution {
public:
    int maxProfit(vector<int>& v) {
        int i,j,n=v.size();
        int ar[n+5],mm=0,x,mx=0;
        for(i=n-1;i>=0;i--){
            mm=max(mm,v[i]);
            ar[i]=mm;
        }
        for(i=0;i<n-1;i++){
            x=ar[i+1]-v[i];
            mx=max(mx,x);
        }
        return mx;
    }
};