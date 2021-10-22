class Solution {
public:
    vector<string>ans;
    void backtrack(string st,int open,int close,int n){
        if(st.size()==n*2){
            ans.push_back(st);
            return;
        }
        
        if(open<n){
            st.push_back('(');
            backtrack(st,open+1,close,n);
            st.pop_back();
        } 
        if(close<open){
            st.push_back(')');
            backtrack(st,open,close+1,n);
            st.pop_back();
        } 
    }
    
    vector<string> generateParenthesis(int n) {
        backtrack("",0,0,n);
        return ans;
    }
};
