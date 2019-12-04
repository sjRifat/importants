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

ll fx[]={ 1, -1,  0,  0};   // 4 direction
ll fy[]={ 0,  0,  1, -1};  // 4 direction

ll matrx[1001][1001];
ll visited[1001][1001];
ll level[1001][1001],R,C;
vll v[10];

void bfs(ll x,ll y){
    visited[x][y]=1;
    level[x][y]=0;
    queue<ll>q;
    q.push(x);
    q.push(y);

    while(!q.empty()){
        ll x1=q.front();
        q.pop();
        ll y1=q.front();
        q.pop();
        for(ll i=0;i<4;i++){
            ll x2=x1+fx[i];
            ll y2=y1+fy[i];

            if((x2>=0&&x2<=R) && (y2>=0&&y2<=C) && (matrx[x2][y2]==0)){
                if(!visited[x2][y2]){
                    visited[x2][y2]=1;
                    q.push(x2);
                    q.push(y2);
                    level[x2][y2]=level[x1][y1]+1;
                }
            }
        }
    }
}

int main()
{
    ll a,b,c,i,j,n,s,t,k,ro,num,r,x1,y1,x2,y2;
    while(SS(R,C)&&R||C){
        mms(matrx,0);
        mms(visited,0);
        mms(level,0);
        S(n);
        while(n--){
            SS(ro,num);
            while(num--){
                S(a);
                matrx[ro][a]=1;
            }
        }
        SS(x1,y1);
        SS(x2,y2);
        bfs(x1,y1);
        printf("%lld\n",level[x2][y2]);
    }

    return 0;
}


/*

10 10
9
0 1 2
1 1 2
2 2 2 9
3 2 1 7
5 3 3 6 9
6 4 0 1 2 7
7 3 0 3 8
8 2 7 9
9 3 2 3 4
0 0
9 9

*/
