class Solution {
public:
    int search(vector<int>& v, int x) {
        int l=0,r=v.size()-1,mid;
        while(l<=r){
            mid=(l+r)/2;
            if(v[mid]==x) return mid;
            if(v[mid]<x) l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
};
