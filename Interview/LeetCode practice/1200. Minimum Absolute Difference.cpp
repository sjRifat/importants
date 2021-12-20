class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& v) {
        map<int,vector<vector<int>>>mv;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            mv[v[i+1]-v[i]].push_back({v[i],v[i+1]});
        }
        return mv.begin()->second;
    }
};
