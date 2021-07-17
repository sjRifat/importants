class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        map<int,int>mp;
        for(int i=0;i<v.size();i++){
            mp[v[i]]++;
            if(mp[v[i]]>1) return true;
        }
        return false;
    }
};
