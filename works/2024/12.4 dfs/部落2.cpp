#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=107;

pair<int,int>a[N];
int n,m,tot,mx,cur[N];
bool g[N][N],ans[N];

void dfs(int k)
{
    if(tot+n-k+1<=mx)return ;
    if(k>n)
    {
        if(tot>mx)
        {
            memset(ans,0,sizeof(ans));
            for(int i=1;i<=tot;i++)
            {
                ans[cur[i]]=1;
            }
            mx=tot;
        }
        return ;
    }
    int i;
    for( i=1;i<=tot;i++)
    {
        if(g[k][cur[i]])break;
    }
    if(i>tot)
    {
        cur[tot++]=k;
        dfs(k+1);
        tot--;
    }
    dfs(k+1);
}

signed main() 
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        a[i].second=i;
    }
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        g[u][v]=g[v][u]=1;
        a[u].first++,a[v].first++;
    }
    stable_sort(a+1,a+n+1);
    dfs(1);
    cout<<mx<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}