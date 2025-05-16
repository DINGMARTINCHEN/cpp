#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=1e3+30;

int h,w,nx,ny,px,py;
char a[N][N];
int vis[N][N];//0未到达过
                //1从始发点染色到达过的地方
                //2从终点染色到达过的地方
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

void dfs(int x,int y)
{
    vis[x][y]=1;
    for(int i=0;i<4;i++)
    {
        if(vis[x+dx[i]][y+dy[i]]==0&&a[x+dx[i]][y+dy[i]]=='.')
        {
            dfs(x+dx[i],y+dy[i]);
        }
    }
    return ;
}

void process(int x,int y)
{
    for(int i=x-2;i<=x+2;i++)
    {
        for(int j=y-2;j<=y+2;j++)
        {
            if(a[i][j]=='.'&&i!=x&&j!=y)
            {
                if(vis[i][j]==1)//一次施法能找到
                {
                    cout<<1;
                    return ;
                }
                else//第一次染色未到达过
                {

                }
            }
        }
    }
    cout<<-1;
    return ;
}

signed main() 
{
    cin>>h>>w>>nx>>ny>>px>>py;
    memset(vis,0,sizeof(vis));
    memset(a,'#',sizeof(a));
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            cin>>a[i][j];
        }
    }

    dfs(nx,ny);
    if(vis[px][py]==1)
    {
        cout<<0;
    }
    else
    {
        process(px,py);
    }
    return 0;
}

/*

.##..##.####


## ##.## .####
## ##.## ..##.
## ##.## .####
.# #..## ..##.
## ##.## .####


 */