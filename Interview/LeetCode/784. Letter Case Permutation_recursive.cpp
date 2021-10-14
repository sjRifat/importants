class Solution {
    vector<string>v;
    void permute(string& s,string cur,int idx){
        if(cur.size()==s.size()){
            v.push_back(cur);
            return;
        }
        if(isdigit(s[idx])) permute(s,cur+s[idx],idx+1);
        else{
            permute(s,cur+(char)toupper(s[idx]),idx+1);
            permute(s,cur+(char)tolower(s[idx]),idx+1);
        }
        return;
    }
    
public:
    vector<string> letterCasePermutation(string s) {
        permute(s,"",0);
        return v;
    }
};
