class Solution {
public:
    vector<string>ans;
    void backtrack(string st,int open,int close,int n){
        if(st.size()==n*2){
            ans.push_back(st);
            return;
        }
        
        if(open<n) backtrack(st+"(",open+1,close,n);
        if(close<open) backtrack(st+")",open,close+1,n);
    }
    
    vector<string> generateParenthesis(int n) {
        backtrack("",0,0,n);
        return ans;
    }
};
