class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=INT_MIN;
        int curmx=1,curmn=1;
        for(int n:nums){
            int tmp=curmx*n;
            curmx=max({tmp,n*curmn,n});
            curmn=min({tmp,n*curmn,n});
            mx=max(mx,curmx);
        }
        return mx;
    }
};
