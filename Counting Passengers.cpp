#include<bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	nn 			    "\n"
#define   	ss 			    ' '
#define   	FOR(i,a,b) 		for(i=a;i<b;i++)
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

int main()
{
    ll a,b,c=0,i,j,k,m,n,o,x,y,z;
    cin>>n>>x;
    for(i=4,j=x,k=1;k<=n;i+=2,j++,k++)
        c+=(i*j);
    cout<<c<<nn;

    return 0;
}
