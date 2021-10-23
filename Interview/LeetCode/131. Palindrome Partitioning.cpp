class Solution {
public:
    vector<vector<string>>ans;
    bool isPal(string s,int l,int r){
        while(l<=r){
            if(s[l++]!=s[r--]) return false;
        }
        return true;
    }
    
    void backtrack(int idx,string s,vector<string>vs){
        if(idx==s.size()){
            ans.push_back(vs);
            return;
        }
        
        for(int i=idx;i<s.size();i++){
            if(isPal(s,idx,i)){
                vs.push_back(s.substr(idx,i-idx+1));
                backtrack(i+1,s,vs);
                vs.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<string>vs;
        backtrack(0,s,vs);
        return ans;
    }
};
