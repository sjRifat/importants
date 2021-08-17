class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int i,x=0;
        for(i=1;i<v.size()-1;i++){
            if(v[i]>v[i+1] and v[i]>v[i-1]) x=i;
        }
        return x;
    }
};
