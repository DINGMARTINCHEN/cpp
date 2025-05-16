#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int a[1005][1005],dp[1005][1005];

signed main() 
{
    int n;
    cin>>n;
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            dp[i][j]=a[i][j]+max(dp[i-1][j],dp[i-1][j-1]);
        }
    }
    int maxn=0;
    for(int i=1;i<=n;i++)
    {
        maxn=max(dp[n][i],maxn);
    }
    cout<<maxn;
    return 0;
}