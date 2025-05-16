#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

char a[105][105];
int sum=0;
int flagx[100],flagy[100];
string model="yizhong";
int vis[105][105];
int dx[]={-1,-1,-1,0, 0, 1,1,1};
int dy[]={-1, 0, 1,1,-1,-1,0,1};

void dfs(int x,int y,int ddx,int ddy,int pos)
{
    vis[x][y]=1;
    if(pos==6)
    {
        return ;
    }
    int xx=x+ddx,yy=ddy+y;
    if(a[xx][yy]==model[pos+1])
    {
        dfs(xx,yy,ddx,ddy,pos+1);
    }
}

signed main() 
{
    int n;
    cin>>n;
    memset(a,'*',sizeof a);
    memset(vis,0,sizeof vis);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='y')
            {
                flagx[sum]=i;
                flagy[sum]=j;
                sum++;
            }
        }
    }
    for(int i=0;i<sum;i++)
    {
        for(int j=0;j<8;j++)
        {
            dfs(flagx[i],flagy[i],dx[j],dy[j],0);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(vis[i][j]==1)
            {
                cout<<a[i][j];
            }
            else
            {
                cout<<'*';
            }
        }
        cout<<endl;
    }
    return 0;
}

/*
路虎：    133/2573=0.051691  100/2573=0.038865 ==1
布加迪：                     160/4031=0.039692 ==2
兰博基尼：                   152/3696=0.041126 ==3
法拉利：                     160/3776=0.042373 ==4
1866/4031=0.462912
*/
