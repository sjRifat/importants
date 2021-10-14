class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string>v;
        string ss=s;
        int i,j,n,x=s.size();
        v.push_back(s);
        for(i=0;i<x;i++){
            if(isdigit(s[i])) continue;
            n=v.size();
            for(j=0;j<n;j++){
                ss=v[j];
                if(islower(ss[i])) ss[i]=toupper(ss[i]);
                else ss[i]=tolower(ss[i]);
                v.push_back(ss);
            }
        }
        return v;
    }
};
