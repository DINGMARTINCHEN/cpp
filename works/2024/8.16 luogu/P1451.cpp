#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

char a[105][105];
bool visited[105][105];

void dfs(int i,int j)
{
    visited[i][j]=1;
    if(a[i+1][j]!='0'&&visited[i+1][j]==0)
    {
        dfs(i+1,j);
    }
    if(a[i-1][j]!='0'&&visited[i-1][j]==0)
    {
        dfs(i-1,j);
    }
    if(a[i][j+1]!='0'&&visited[i][j+1]==0)
    {
        dfs(i,j+1);
    }
    if(a[i][j-1]!='0'&&visited[i][j-1]==0)
    {
        dfs(i,j-1);
    }
    return ;
}

signed main() 
{
    int n,m;
    cin>>n>>m;
    memset(a,'0',sizeof(a));
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]!='0'&&visited[i][j]==0)
            {
                dfs(i,j);
                sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}