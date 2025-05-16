#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=6005;

int c[N],w[N],s[N],dp[N];

signed main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>c[i]>>s[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=m;j>=0;j--)
        {
            for(int k=0;k<=s[i];k++)
            {
                if(j-k*w[i]<0) break;
                dp[j]=max(dp[j],dp[j-k*w[i]]+k*c[i]);
            }
        }
    }
    cout<<dp[m];
}