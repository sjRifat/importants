#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a,b,m,n,i,j,k,x,y,t,c=0,ar[100];

    scanf("%lld",&n);
    vector<ll>v[1<<n+5];
    for(i=0;i<n;i++) scanf("%lld",&ar[i]);
    for(i=0;i<(1<<n);i++){
        for(j=0;j<n;j++){
            if(i&(1<<j)) v[i].push_back(ar[j]);
        }
    }
    for(i=0;i<(1<<n);i++){
        for(j=0;j<(ll)v[i].size();j++){
            printf("%lld ",v[i][j]);
        }
        printf("\n");
    }

    return 0;
}
