class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>us(nums.begin(),nums.end());
        int mx=0;
        for(int x : us){
            if(us.find(x)!=us.end()){
                int prev=x-1;
                int next=x+1;
                while(us.find(prev)!=us.end()){
                    us.erase(prev);
                    prev--;
                }
                while(us.find(next)!=us.end()){
                    us.erase(next);
                    next++;
                }
                mx=max(mx,next-prev-1);
            }
        }
        return mx;
    }
};
