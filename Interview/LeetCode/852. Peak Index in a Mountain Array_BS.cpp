class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int l=1,r=v.size()-1,mid;
        while(l<r){
            mid=(l+r)/2;
            if(v[mid]>v[mid+1]) r=mid;
            else l=mid+1;
        }
        return r;
    }
};
