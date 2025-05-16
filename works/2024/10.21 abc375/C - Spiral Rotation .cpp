#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    char a[n+10][n+10];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    char b[n+10][n+10];
    int k;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            k=min(abs(n-i),abs(n-j))+1;
            k=min(k,min(i,j));
        //  if(k==0)k=1;
        //  cout<<k<<endl;
            if(k%4==0)b[i][j]=a[i][j];
            else if(k%4==1)b[i][j]=a[n+1-j][i];
            else if(k%4==2)b[i][j]=a[n+1-i][n+1-j];
            else if(k%4==3)b[i][j]=a[j][n+1-i];
        }
    }
    //j=n+1-i
    //i=n+1-j 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }
    return 0;
}