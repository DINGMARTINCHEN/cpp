#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[1005],n;
int dp[1005];

signed main() 
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        dp[i]=a[i];
        for(int j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                dp[i]=max(dp[i],dp[j]+a[i]);
            }
        }
    }
    int maxn=0;
    for(int i=0;i<n;i++)
    {
        maxn=max(maxn,dp[i]);
    }
    cout<<maxn;
    return 0;
}