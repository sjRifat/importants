class Solution {
public:
    vector<int> findDuplicates(vector<int>& v) {
        vector<int>ans;
        int i,x,n=v.size();
        for(i=0;i<n;i++){
            x=abs(v[i])-1;
            if(v[x]>0) v[x]*=-1;
            else ans.push_back(x+1);
        }
        return ans;
    }
};
