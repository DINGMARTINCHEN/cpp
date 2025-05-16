#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
char a[105][105];
string yz="yizhong";
int dx[8]={1,-1,0,1,-1,0,1,-1};
int dy[8]={0,0,1,1,1,-1,-1,-1};
int m[105][105];

void search(int x,int y)
{
    for(int i=0;i<8;i++)//·½Î»
    {
        int mark=0;
        for(int j=1;j<yz.size();j++)
        {
            int sx=x+dx[i]*j,sy=y+dy[i]*j;
            if(a[sx][sy]!=yz[j])
            {
                mark=1;
                break;
            }
        }
        if(mark==0)
        {
            for(int j=0;j<yz.size();j++)
            {
                int sx=x+dx[i]*j,sy=y+dy[i]*j;
                m[sx][sy]=1;
            }
        }
    }
}

signed main() 
{
    memset(m,0,sizeof(m));
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]=='y')
            {
                search(i,j);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(m[i][j]==1)
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