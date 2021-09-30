class Solution {
public:
    vector<int> twoSum(vector<int>& v, int n) {
        int i,x;
        map<int,int>mp;
        for(i=0;i<(int)v.size();i++) mp[v[i]]=i;
        for(i=0;i<(int)v.size();i++){
            x=n-v[i];
            if(mp.find(x)!=mp.end() and mp[x]>i) return {i,mp[x]};
        }
        return {};
    }
};
