#include<bits/stdc++.h>
using namespace std;
typedef	    long long       ll;
typedef	    vector<ll>      vll;
#define     pb              push_back
#define	    PB              pop_back
#define	    nn              "\n"
#define	    all(p)          p.begin(),p.end()
#define	    zz(v)           (ll)v.size()
#define	    mms(ar,a)       memset(ar,a,sizeof(ar))
#define	    ss              ' '
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     yes             printf("YES\n")
#define     no              printf("NO\n")
#define     P(a)            printf("%lld\n",a)
#define     PP(a,b)         printf("%lld %lld\n",a,b)
#define	    gcd(a,b)        __gcd(a,b)
#define	    lcm(a,b)        (a*b)/gcd(a,b)
#define	    pi              acos(-1.0)
#define	    OO              1000000007

ll tk=0;
void solve(){
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z,ar[2010];
    ll p=0,sm=0,cnt=0;
    string s[111];
    S(n);
    for(i=0;i<n;i++) cin>>s[i];
    string st,stt;
    x=(zz(s[0])+1)/2;
    for(i=0;i<x;i++) st.pb(s[0][i]);
    for(i=1;i<n;i++){
        c=0;
        for(j=0;j<zz(s[0])-x+1;j++){
            stt.assign(s[i],j,x);
            if(stt==st){
                printf("NOT ACCEPT\n");
                return;
            }
        }
    }
    printf("ACCEPT\n");
}

int main(){
//	freopen("input.txt", "r", stdin);
    ll i,t;
    S(t);
    while(t--){
        solve();
    }

    return 0;
}
