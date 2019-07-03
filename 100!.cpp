#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;
#define     mx              500

ll multi(ll x, ll res[],ll res_size){
    ll carry=0;
    for(ll i=0;i<res_size;i++){
        ll prod=res[i]*x+carry;
        res[i]=prod%10;
        carry = prod/10;
    }
    while(carry){
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}

void fact(ll n){
    ll res[mx];
    res[0]=1;
    ll res_size=1;

    for(ll x=2; x<=n;x++){
        res_size=multi(x,res,res_size);
    }
    for(ll i=res_size-1;i>=0;i--){
        cout<<res[i];
    }
}

int main()
{
    ll a,b,c,i,j,t,k,m,n,o,x,y,z,ar[100010];
    cin>>n;
    fact(n);

    return 0;
}
