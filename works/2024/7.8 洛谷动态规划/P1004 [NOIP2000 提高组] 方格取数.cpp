#include<bits/stdc++.h>
using namespace std;

const int N=1e8;

int main()
{
    int n;
    cin>>n;
    int a[n+1][n+1];
    int dp[n+1][n+1][n+1][n+1];
    memset(dp,0,sizeof(dp));
    memset(a,0,sizeof(a));
    int x,y,num;
    while(1)
    {
        cin>>x>>y>>num;
        if(x==0&&y==0&&num==0)
        {
            break;
        }
        a[x][y]=num;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int p=1;p<=n;p++)
            {
                for(int q=1;q<=n;q++)
                {
                    dp[i][j][p][q]=max(max(max(dp[i-1][j][p-1][q],dp[i-1][j][p][q-1]),dp[i][j-1][p][q-1]),dp[i][j-1][p-1][q])+a[i][j]+a[p][q];
                    if(i==p&&j==q)//由于第一次走过的点第二次变为0，所以在这里同步走时可以认为如果(i,j)(k,l)重合，即i == k && j == l，则权值只加一次
                    {
                        dp[i][j][p][q]-= a[i][j];
                    } 
                }
            }
        }
    }
    cout<<dp[n][n][n][n];
}

//https://blog.csdn.net/qq_51052824/article/details/113269729