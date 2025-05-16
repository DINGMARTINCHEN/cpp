#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int f[1005][1005],a[1005][1005],n;

int dfs(int x,int y)
{
    if(f[x][y]==-1)
    {
        if(x==n)
        {
            f[x][y]=a[x][y];
        }
        else
        {
            f[x][y]=a[x][y]+max(dfs(x+1,y),dfs(x+1,y+1));
        }
    }
    return f[x][y];
}

signed main() 
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cin>>a[i][j];
        }
    }
    memset(f,-1,sizeof(f));
    dfs(0,0);
    cout<<f[0][0];
    return 0;
}