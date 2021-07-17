class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
        vector<int>vv;
        int i,j,n=v.size();
        int ct[100010]={0};
        for(i=0;i<n;i++){
            ct[v[i]]++;
        }
        for(i=1;i<=n;i++){
            if(ct[i]==0) vv.push_back(i);
        }
        return vv;
    }
};
