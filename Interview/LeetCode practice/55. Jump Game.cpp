class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int x=n-1,a,cnt=1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>=cnt){
                x=i;
                cnt=0;
            }
            cnt++;
        }
        if(!x) return true;
        return false;
    }
};
