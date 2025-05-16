#include<iostream>
using namespace std;
char a[9999],b[9999];
int a1[9999],b1[9999];
int cnt=1;
int n,m;
int sum(int *a,int *b,int cnt)
{
    int q=a[cnt]+b[cnt];
    if(q>=10)
    {
        q%=10;
        a[cnt+1]++;
    }
    if(cnt==max(n,m)+1) return;
    sum(a,b,cnt+1);
    cout<<q;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
for(int j=1;j<=n;j++) a1[j]=int(a[n+1-j]-48);
for(int i=1;i<=m;i++) cin>>b[i];
for(int j=1;j<=m;j++) b1[j]=int(b[m+1-j]-48);
sum(a1,b1,cnt) ;
}