#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int a[10][10];
int sx,sy,ex,ey;
int sum=0;

void dfs(int x,int y)
{
    if(x==ex&&y==ey)
    {
        sum++;
        return ;
    }
    else
    {
        a[x][y]=1;
        if(a[x+1][y]!=1)
        {
            dfs(x+1,y);
        }
        if(a[x-1][y]!=1)
        {
            dfs(x-1,y);
        }
        if(a[x][y+1]!=1)
        {
            dfs(x,y+1);
        }
        if(a[x][y-1]!=1)
        {
            dfs(x,y-1);
        }
        a[x][y]=0;
    }
}

signed main() 
{
    int n,m;
    cin>>n>>m;
    int t;
    cin>>t;
    cin>>sx>>sy>>ex>>ey;
    memset(a,0,sizeof(a));
    for(int i=0;i<=m+1;i++)
    {
        a[0][i]=1;
        a[n+1][i]=1;
    }
    for(int i=0;i<=n+1;i++)
    {
        a[i][0]=1;
        a[i][m+1]=1;
    }
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
    }
    // for(int i=0;i<=n+1;i++)
    // {
    //     for(int j=0;j<=m+1;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    dfs(sx,sy);
    cout<<sum;
    return 0;    
}