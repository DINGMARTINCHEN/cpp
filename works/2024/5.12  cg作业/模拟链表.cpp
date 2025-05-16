#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
int n,m,k[N],h[N],w[N],p;
void add(int a,int b)
{
    k[++p]=b;
    w[p]=h[a];
    h[a]=p;
}
int main()
{
    int i,j;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        add(a,b);
        add(b,a);
    }
    for(i=1;i<=n;i++)
    {
        int t=0;
        for(j=h[i];j;j=w[j]) t++;
        cout<<t<<" ";
        for(j=h[i];j;j=w[j])
          cout<<k[j]<<" ";
        cout<<endl;
    }
    return 0;
}