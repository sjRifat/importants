class Solution {
public:
    string res;
    int mxlen=0;
    void mxpal(int l,int r,string s){
        while(l>=0 and r<s.size() and s[l]==s[r]){
            if(r-l+1>mxlen){
                mxlen=r-l+1;
                res.assign(s,l,mxlen);
            }
            l--;
            r++;
        }
    }
    
    string longestPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            mxpal(i,i,s);
            mxpal(i,i+1,s);
        }
        return res;
    }
};
