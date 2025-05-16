#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

char a[22][22];
int sum=1;
bool vis[22][22];
int dx[3]={-1,1,0},dy[3]={-1,1,0};

void dfs(int x,int y)
{
    vis[x][y]=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(dx[i]*dy[j]==0)
            {
                int xx=x+dx[i],yy=y+dy[j];
                if(a[xx][yy]=='.')
                {
                    if(vis[x+dx[i]][y+dy[j]]==0)
                    {
                        sum++;
                    }
                    dfs(x+dx[i],y+dy[j]);
                }
            }
            
        }
    }
    return ;
}

signed main() 
{
    int n,m;
    cin>>m>>n;
    int si,sj;
    memset(a,'#',sizeof a);
    memset(vis,0,sizeof vis);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='@')
            {
                si=i,sj=j;
            }
        }
    }
    dfs(si,sj);
    cout<<sum;
    return 0;
}