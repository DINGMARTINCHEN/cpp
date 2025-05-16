#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,sum,ans=1e9,a[251],b[251],dp[251][251];

signed main() 
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if (j<a[i-1])
            {
                dp[i][j]=dp[i-1][j]+b[i-1];
            }
            else
            {
                dp[i][j]=min(dp[i-1][j-a[i-1]],dp[i-1][j]+b[i-1]);
            }
        }
    }
    for(int i=0;i<=sum;i++)
    {
        if(max(dp[n][i],i)<ans)
        {
            ans=max(dp[n][i],i);
        }
    }
    cout<<ans;
    return 0;
}