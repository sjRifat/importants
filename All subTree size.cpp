#include<bits/stdc++.h>
using namespace std;

vector<int>v[10010];
int vis[10010],sub_tree_size[10010];

int dfs(int node){
    vis[node]=1;
    int cur_size=1;
    for(int child:v[node]){
        if(!vis[child]) cur_size+=dfs(child);
    }
    sub_tree_size[node]=cur_size;
    return cur_size;
}

int main(){
    int i,j,m,n,a,b;
    scanf("%d %d",&n,&m);
    while(m--){
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    for(i=1;i<=n;i++)
        printf("subtree for node %d is -> %d\n",i,sub_tree_size[i]);

    return 0;
}

/*
7 6
1 2
2 3
3 7
2 4
4 5
4 6
*/
