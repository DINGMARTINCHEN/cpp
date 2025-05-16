#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int w[300],c[300],f[300][300];
    int n,m;
    cin>>m>>n;
    for(int i=1;i<n;i++)
    {
        cin>>w[i]>>c[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;i<=m;j++)
        {
            for(int k=0;k*w[i]<=j;k++)
            {
                f[i][j]=max(f[i-1][j],f[i-1][j-k*w[i]]+k*c[i]);
            }
        }
    }
    cout<<f[n][m];
    return 0;
}