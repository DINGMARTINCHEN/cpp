#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[105][105],a[105],sum[105];

signed main() 
{
    int n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        sum[i]=sum[i-1]+a[i-1];//��¼ÿ�������еĺ�
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=min(i,m);j++) //�������п��ܵķָ�㣬�Ա��ҵ���ǰ i �����ָ�� j �ε���С����
        {
            for(int k=j-1;k<i;++k)
            {
                dp[i][j]=min(dp[i][j],max(dp[k][j-1],sum[i]-sum[k]));
            }
        }
    }
    cout<<dp[n][m];
    return 0;
}