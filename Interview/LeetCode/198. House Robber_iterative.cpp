class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1=0,rob2=0;
        for(int n:nums){
            int temp=max(n+rob1,rob2);
            rob1=rob2;
            rob2=temp;
        }
        return rob2;
    }
};
