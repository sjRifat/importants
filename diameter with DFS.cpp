#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;

vector<ll> v[10010],dist(10010);
bool visited[10010];
ll node,edge,mx=0,nd=0;

void dfs(ll u,ll d){
    visited[u]=true;
    dist[u]=d;
    if(d>mx){
        mx=d;
        nd=u;
    }
    for(ll i=0;i<(ll)v[u].size();i++){
        ll p=v[u][i];
        if(!visited[p]) dfs(p,d+1);
    }
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll a,b,c,s,d,i,j,t,k;
    scanf("%lld",&node);
    for(i=1;i<node;i++){
       scanf("%lld %lld",&a,&b);
       v[a].push_back(b);
       v[b].push_back(a);
    }
    dfs(1,0);
    memset(visited,0,sizeof(visited));
    dist.assign(10010,0);
    dfs(nd,0);
    printf("%lld\n",mx);

    return 0;
}
