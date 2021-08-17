class Solution {
public:
    char nextGreatestLetter(vector<char>& v, char x) {
        int l=0,r=v.size()-1,mid;
        v.push_back(v.front());
        while(l<r){
            mid=(l+r)/2;
            if(v[mid]<=x) l=mid+1;
            else r=mid;
        }
        return v[l];
    }
};
