#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[105][105],s[105];

signed main() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        s[i]+=s[i-1];
    }
    memset(dp,0x3f,sizeof dp);
    for(int len=1;len<=n;len++)
    {
        for(int i=1;i<=n+1-len;i++)
        {
            int j=i+len-1;
            if(len==1)
            {
                dp[i][j]=0;
            }
            else 
            {
                for(int k=i;k<j;k++)
                {
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+s[j]-s[i-1]);
                }
            }
        }
    }
    cout<<dp[1][n];
    return 0;
}