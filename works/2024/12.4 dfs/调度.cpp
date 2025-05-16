#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[10007],b[10007],minn=1e10,n,k;

void dfs(int x,int y)
{
    if(y>=minn) return ;
    if(x==0)
    {
        minn=y;
        return ;
    }
    int vis[1000]={0};
    for(int i=1;i<=k;i++)
    {
        if(vis[b[i]])continue;
        vis[b[i]]=true;
        b[i]+=a[x];
        dfs(x-1,max(y,b[i]));
        b[i]-=a[x];
    }
    return ;
}

signed main() 
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    dfs(n,0);
    cout<<minn;
    return 0;
}