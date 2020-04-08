#include<bits/stdc++.h>
using namespace std;
typedef long long       ll;

ll spf[1000010];  //smallest prime factor

void spfgen(){
    ll i,j;
    for(i=1;i<1000010;i++){
        if(i%2==0) spf[i]=2LL;
        else spf[i]=i;
    }
    for(i=3;i*i<1000010;i+=2){
        if(spf[i]==i){ // if prime
            for(j=i*i;j<1000010;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
}
ll ar[1000010];
int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,i,j,t,k,lie,m,n,o,x,y,z;
    spfgen();
    for(i=2;i<=1000000;i++){
        x=i;
        while(x!=1){
            x/=spf[x];
            ar[i]++;
        }
    }
    while(scanf("%lld",&n)==1){
        printf("%lld\n",ar[n]);
    }


    return 0;
}
