#include<bits/stdc++.h>
using namespace std;
const int maxn=111;
int n,m,ans[maxn][maxn];
int main(){
    cin>>n;
    m=pow(2,n);
    ans[1][1]=1;
    int half=1;
    while(n--){
        for(int i=1;i<=half;i++){
            for(int j=1;j<=half;j++){
                ans[i][j+half]=ans[i][j]+half;
            }
        }
        for(int i=1;i<=half;i++){
            for(int j=1;j<=half;j++){
                ans[i+half][j]=ans[i][j+half];
                ans[i+half][j+half]=ans[i][j];
            }
        }
        half*=2;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}