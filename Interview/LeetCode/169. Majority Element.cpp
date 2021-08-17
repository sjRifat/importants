class Solution {
public:
    int majorityElement(vector<int>& v) {
        int n=(v.size()-1)/2;
        sort(v.begin(),v.end());
        return v[n];
    }
};
