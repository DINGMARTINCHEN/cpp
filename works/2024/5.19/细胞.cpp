#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[105][105];
void dfs(int x,int y)
{
    if(x>n||x<1||y>m||y<1||a[x][y]=='0')
    {
        return;
    }
    a[x][y]='0';
    dfs(x+1,y);
    dfs(x,y+1);
    dfs(x-1,y);
    dfs(x,y-1);
}
int main()
{
    cin>>n>>m;
    int sum=0;
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
            if(a[i][j]!='0')
            {
                sum++;
                dfs(i,j);
            }
        }
    }
    cout<<sum;
}


