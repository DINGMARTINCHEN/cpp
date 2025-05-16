#include <bits/stdc++.h>
#define int long long
using namespace std;

int dx[]={0,0,1,1,1,-1,-1,-1};
int dy[]={-1,1,0,1,-1,0,1,-1};
int n,ans,g[11][11];

void dfs(int x,int y)
{
    if(x==1&&y==n)
    {
        ans++;return ;

    }
    for(int i=0;i<8;i++)
    {
        int xx=x+dx[i],yy=y+dy[i];
        if(xx<1||xx>n||yy<1||yy>n||g[xx][yy])
        {
            continue;
        }
        g[xx][yy]=2;
        dfs(xx,yy);
        g[xx][yy]=0;
    }
}

signed main() 
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>g[i][j];
        }
    }
    g[1][1]=2;
    dfs(1,1);
    cout<<ans;
    return 0;
}