class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ss,tt;
        int i;
        for(i=0;i<(int)s.size();i++){
            if(s[i]=='#' and ss.size()) ss.pop_back();
            else if(s[i]!='#') ss.push_back(s[i]);
        }
        for(i=0;i<(int)t.size();i++){
            if(t[i]=='#' and tt.size()) tt.pop_back();
            else if(t[i]!='#') tt.push_back(t[i]);
        }
        if(ss==tt) return true;
        return false;
    }
};
