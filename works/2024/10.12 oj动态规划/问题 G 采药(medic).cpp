#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[1005][1005];
int w[1005],v[1005];

signed main() 
{
    int t,n;
    cin>>t>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=t;j>=0;j--)
        {
            if(j>=w[i])
            {// 如果当前背包容量足够装下物品 i，则计算装入物品 i 和不装入物品 i 的最大价值
                dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
            }
            else
            {// 如果当前背包容量不足以装下物品 i，则不装入物品 i
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][t];
    return 0;
}
/*
int main()
{
}

signed main() 
{
    int t,n;
    cin>>t>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=t;j>=0;j--)
        {
            if(j>=w[i])
            {
                // 如果当前背包容量足够装下物品 i，则计算装入物品 i 和不装入物品 i 的最大价值
                dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
            }
            else
            {
                // 如果当前背包容量不足以装下物品 i，则不装入物品 i
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][t];
    return 0;
}


 */