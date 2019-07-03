#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		ss              ' '
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{
    ll c=0,i,j,t,k,m,n,o,x,y,z;

    string s,s1,s2;
    scanf("%lld",&t);
    while(t--)
    {
        vector<char> v,vv;
        ll p=0,pp=0,ppp=0,a,b,mx;
        scanf("%lld",&n);
        cin>>s1>>s2;
        for(i=0; i<s1.size(); i++)
        {
            if(s1[i]=='.')
            {
                a=i;
                break;
            }
            else
                v.pb(s1[i]);
        }
        for(i=0; i<s2.size(); i++)
        {
            if(s2[i]=='.')
            {
                b=i;
                break;
            }
            else
                vv.pb(s2[i]);
        }
        if(v.size()!=vv.size())
            p=1;
        else
        {
            for(i=a+1; i<s1.size(); i++)
                v.pb(s1[i]);
            for(i=b+1; i<s2.size(); i++)
                vv.pb(s2[i]);
        }
        mx=max(v.size(),vv.size());
        if(v.size()<vv.size())
        {
            while(v.size()!=mx)
            {
                v.pb('0');
            }
        }
        else if(v.size()>vv.size())
        {
            while(vv.size()!=mx)
            {
                vv.pb('0');
            }
        }
        if(n<mx)
        {
            for(i=0;i<n;i++)
                if(v[i]!=vv[i]) pp=1;
        }
        else
        {
            for(i=0;i<mx;i++)
                if(v[i]!=vv[i]) ppp=1;
        }
        if(p==1 || pp==1 || ppp==1)
            printf("Case %lld: rejected\n",++c);
        else printf("Case %lld: accepted\n",++c);
        v.clear();
        vv.clear();
    }

    return 0;
}
