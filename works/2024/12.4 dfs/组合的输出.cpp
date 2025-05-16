#include <bits/stdc++.h>
#define int long long
using namespace std;

int vis[10005],n,r,a[10005];

void dfs(int k)
{
    if(k>r)
    {
        for(int i=1;i<=r;i++)
        {
            printf("%3lld",a[i]);
        }
        puts(" ");
        return ;
    }
    for(int i=a[k-1]+1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            a[k]=i;
            vis[i]=1;
            dfs(k+1);
            vis[i]=0;
        }
    }
}

signed main() 
{
    cin>>n>>r;
    dfs(1);
    return 0;
}