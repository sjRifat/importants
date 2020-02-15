#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		mms(ar,a)       memset(ar,a,sizeof(ar))
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

ll sod[100010],nod[100010];
vll alldiv[100010];

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    for(i=1;i<=100000;i++){
        for(j=i;j<=100000;j+=i){
            nod[j]++;
            sod[j]+=i;
            alldiv[j].pb(i);
        }
    }
    while(S(n)==1){
        printf("Number of divisor is -> %lld\n",nod[n]);
        printf("Sum of divisor is -> %lld\n",sod[n]);
        printf("all divisors are --> ");
        for(i=0;i<zz(alldiv[n]);i++) printf("%lld ",alldiv[n][i]);
        printf(nn);
    }

    return 0;
}
