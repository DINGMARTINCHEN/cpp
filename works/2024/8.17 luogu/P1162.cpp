#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int a[32][32];
bool vis[32][32];
int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1},n;

void dfs(int x,int y)
{
    if(x<0||y<0||x>n+1||y>n+1)
    {
        return ;
    }
    vis[x][y]=1;
    if(a[x+1][y]==0&&vis[x+1][y]==0)
    {
        dfs(x+1,y);
    }
    if(a[x][y+1]==0&&vis[x][y+1]==0)
    {
        dfs(x,y+1);
    }
    if(a[x-1][y]==0&&vis[x-1][y]==0)
    {
        dfs(x-1,y);
    }
    if(a[x][y-1]==0&&vis[x][y-1]==0)
    {
        dfs(x,y-1);
    }
    return ;
}

signed main() 
{
    cin>>n;
    memset(a,0,sizeof(a));
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    dfs(0,0);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==0&&vis[i][j]==0)
            {
                cout<<2<<" ";
            }
            else
            {
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// 6
// 0 0 0 0 0 0
// 0 0 1 1 1 1
// 0 1 1 0 0 1
// 1 1 0 0 0 1
// 1 0 0 0 0 1
// 1 1 1 1 1 0