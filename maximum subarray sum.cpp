#include<bits/stdc++.h>
using namespace std;
typedef         long long       ll;

int main(){
//    freopen("input.txt", "r", stdin);
    ll i,ar[200010],n,mx;
    cin>>n;
    for(i=0;i<n;i++) cin>>ar[i];
    mx=ar[0];
    for(i=1;i<n;i++){
        if(ar[i-1]+ar[i]>ar[i]){
            ar[i]=ar[i-1]+ar[i];
        }
        mx=max(mx,ar[i]);
    }
    cout<<mx<<endl;

    return 0;
}
