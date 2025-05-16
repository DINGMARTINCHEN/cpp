#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int n,m,sum=0;
char a[1005][1005];
bool vis[1005][1005];
int dx[4]={0,0,-1,1},dy[4]={1,-1,0,0};

void dfs(int x,int y)
{
    vis[x][y]=1;
    for(int i=0;i<4;i++)
    {
        if(a[x+dx[i]][y+dy[i]]=='#'&&vis[x+dx[i]][y+dy[i]]==0)
        {
            dfs(x+dx[i],y+dy[i]);
        }
    }
    return ;
}

bool d(int i,int j){
	int c=0;
	if(a[i][j]=='#')c++;
	if(a[i+1][j]=='#')c++;
	if(a[i][j+1]=='#')c++;
	if(a[i+1][j+1]=='#')c++;
	if(c==3)return 0;
	return 1;
}

signed main() 
{
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
            if(i<n&&j<m&&d(i,j)==0)
            {
				printf("Bad placement.");
				return 0;//不合法后面就没必要继续了 
			}
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='#'&&vis[i][j]==0)
            {
                dfs(i,j);
                sum++;
            }
        }
    }
    cout<<"There are "<<sum<<" ships.";
    return 0;
}