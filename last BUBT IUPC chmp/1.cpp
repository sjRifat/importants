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

int main(){
//	freopen("input.txt", "r", stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,id,o,x,y,z,ar[2010];
    vll v[111];
    ll sm=0,cnt=0;
    ll ct[111]={0};
    SSS(a,b,c);
    double mn=10000000.0;
    for(i=0;i<a-1;i++){
        SSS(id,x,y);
        SSS(m,n,o);
        v[i].pb(id);
        v[i].pb(x);
        v[i].pb(y);
        v[i].pb(min(m,min(n,o)));
    }
    for(i=0;i<a-1;i++){
        mn=10000000.0;
        for(j=0;j<a-1;j++){
            double xx=labs(v[j][1]-b)*1.0;
            double yy=labs(v[j][2]-c)*1.0;
            double dst=sqrt(xx*xx+yy*yy);
            if(dst<mn and ct[j]==0){
                mn=dst;
                id=j;
                x=v[j][0];
                y=v[j][3];
            }
        }
        ct[id]=1;
        b=v[id][1];
        c=v[id][2];
        PP(x,y);
    }

    return 0;
}
