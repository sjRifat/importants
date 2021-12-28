#include<bits/stdc++.h>
using namespace std;

int ans[101][101],tc=0,tr=0,cnt=1,tp[101][101];
set<int>st;
void print(){
    for(int i=1;i<=tr;i++){
        for(int j=1;j<=tc;j++){
            if(tp[i][j]==0) cout<<"    ";
            else printf("%4d",tp[i][j]);
            if(st.find(j)!=st.end()) cout<<"    ";
        }
        cout<<"\n";
    }
}

int main(){
    int i,j,k,seat,passenger,x,y,tmp;
    cin>>seat>>passenger;
    for(i=1;i<=seat;i++){
        int col,row;
        cin>>col>>row;
        tr=max(tr,row);
        if(i==1) tmp=2;
        else tmp=1;
        for(j=1;j<=row;j++) ans[j][tc+1]=tmp;
        x=tc+2;
        tc+=col;
        st.insert(tc);
        y=tc;
        if(i==seat) tmp=2;
        else tmp=1;
        for(j=1;j<=row;j++) ans[j][tc]=tmp;
        for(k=x;k<y;k++){
            for(j=1;j<=row;j++) ans[j][k]=3;
        }
    }
    for(k=1;k<=3;k++){
        for(i=1;i<=tr;i++){
            for(j=1;j<=tc;j++){
                if(ans[i][j]==k){
                    tp[i][j]=cnt;
                    if(cnt==passenger){
                        print();
                        return 0;
                    }
                    cnt++;
                }
            }
        }
    }

    return 0;
}


/*
input:
4 30
3 2
4 3
2 3
3 4

output:
  19  25   1       2  26  27   3       4   5       6  28  20
  21  29   7       8  30       9      10  11      12      22
                  13          14      15  16      17      23
                                                  18      24
*/
