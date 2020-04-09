//problem link: https://codeto.win/problem/1061

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ll a,b,c=0,i,j,k,m,n,o,x,y,z;
    cin>>n>>x;
    for(i=4,j=x,k=1;k<=n;i+=2,j++,k++)
        c+=(i*j);
    cout<<c<<nn;

    return 0;
}
