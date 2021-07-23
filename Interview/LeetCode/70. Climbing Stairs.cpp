class Solution {    
public:
    int ar[55];
    int rec(int n){
        if(n<4){
            return n;
        }
        if(ar[n]!=-1){
            return ar[n];
        }
        return ar[n]=(rec(n-1)+rec(n-2));
    }
    
    int climbStairs(int n) {
        memset(ar,-1,sizeof(ar));
        int x=rec(n);
        return x;
    }
};
