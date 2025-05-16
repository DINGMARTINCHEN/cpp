#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

char a[105][105];
bool vis[105][105];
int sum=0;
int dx[3]={-1,0,1},dy[3]={-1,0,1};

void dfs(int x,int y)
{
    vis[x][y]=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(vis[x+dx[i]][y+dy[j]]==0&&a[x+dx[i]][y+dy[j]]=='W')
            {
                dfs(x+dx[i],y+dy[j]);
            }
        }
    }
    return ;
}

signed main() 
{
    int n,m;
    cin>>n>>m;
    memset(a,'.',sizeof a);
    memset(vis,0,sizeof vis);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='W'&&vis[i][j]==0)
            {
                dfs(i,j);
                sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}