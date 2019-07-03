#include<bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	nn 			    "\n"
#define   	ss 			    ' '
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

int main()
{
    ll a,b,c,i,j,k,m,n,o,x,y,z,p;
    vll v,vv;
    while(cin>>n&&n)
    {
        if(n%2==0)
            vv.pb(2);
        for(i=3; i<=n/2; i+=2)
        {
            if(n%i==0)
                v.pb(i);
        }
        for(i=0; i<v.size(); i++)
        {
            p=0;
            for(j=3; j<v[i]/2; j+=2)
            {
                if(v[i]%j==0)
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
                vv.pb(v[i]);
        }
        if(vv.size()<2)
            cout<<-1<<nn;
        else
            cout<<vv[vv.size()-1]<<nn;
        v.clear();
        vv.clear();
    }

    return 0;
}
