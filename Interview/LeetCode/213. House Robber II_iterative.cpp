class Solution {
public:
    int Rob(vector<int>nums,int st,int ed){
        int rob1=0,rob2=0;
        for(int i=st;i<ed;i++){
            int temp=max(nums[i]+rob1,rob2);
            rob1=rob2;
            rob2=temp;
        }
        return rob2;
    }
    
    int rob(vector<int>& nums) {
        return max({nums[0],Rob(nums,0,nums.size()-1),Rob(nums,1,nums.size())});
    }
};
