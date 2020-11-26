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
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2){
        printf("Case #%lld: YES\n",++tk);
        return;
    }
    if(s1[0]!=s2[0]){
        printf("Case #%lld: NO\n",++tk);
        return;
    }
    vll v1,v2;
    ll c1=0,c2=0;
    for(i=0;i<zz(s1);){
        if(s1[i]=='R'){
            while(s1[i]=='R' and i<zz(s1)){
                c1++;
                i++;
            }
            v1.pb(c1);
            c1=0;
        }
        else{
            while(s1[i]=='G' and i<zz(s1)){
                c1++;
                i++;
            }
            v1.pb(c1);
            c1=0;
        }
    }
    for(i=0;i<zz(s2);){
        if(s2[i]=='R'){
            while(s2[i]=='R' and i<zz(s2)){
                c1++;
                i++;
            }
            v2.pb(c1);
            c1=0;
        }
        else{
            while(s2[i]=='G' and i<zz(s2)){
                c1++;
                i++;
            }
            v2.pb(c1);
            c1=0;
        }
    }
    if(zz(v1)!=zz(v2) or zz(v1)==1){
        printf("Case #%lld: NO\n",++tk);
        return;
    }
    for(i=0;i<zz(v1);i++){
        if(v1[i]<v2[i] or v1[i]%2!=v2[i]%2){
            printf("Case #%lld: NO\n",++tk);
            return;
        }
    }
    printf("Case #%lld: YES\n",++tk);
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
