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

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,p=0,x,y,z,ar[200010];
    stack<char>st;
    string s;
    cin>>s;
    for(i=0;i<zz(s);i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
        if(s[i]==')' || s[i]=='}' || s[i]==']'){
            if(st.empty()){
                printf("not balanced\n1\n");
                return 0;
            }
            else if(s[i]==')'&&st.top()!='(' || s[i]=='}'&&st.top()!='{' || s[i]==']'&&st.top()!='['){
                printf("not balanced\n2\n");
                return 0;
            }
            else st.pop();
        }
    }
    if(st.empty()) printf("balanced\n");
    else  printf("not balanced\n");

    return 0;
}
