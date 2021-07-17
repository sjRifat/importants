class Solution {
public:
    int singleNumber(vector<int>& v) {
        int i,sm=0;
        for(i=0;i<v.size();i++) sm^=v[i];
        return sm;
    }
};
