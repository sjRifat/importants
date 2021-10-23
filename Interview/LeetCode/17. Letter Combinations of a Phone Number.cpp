class Solution {
public:
    vector<string>ans;
    map<char,string>mp;
    void backtrack(int idx,string st,string digit){
        if(st.size()==digit.size()){
            ans.push_back(st);
            return;
        }
        
        for(char c:mp[digit[idx]]){
            backtrack(idx+1,st+c,digit);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        if(digits.size()) backtrack(0,"",digits);
        return ans;
    }
};
