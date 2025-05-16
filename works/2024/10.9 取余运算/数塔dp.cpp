#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int f[1005][1005],a[1005][1005];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cin>>a[i][j];
        }
    }
    f[1][1]=a[1][1];
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=i;j++)
        {
            f[i][j]=a[i][j]+max(f[i-1][j-2],f[i-1][j]);

        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,f[n][i]);
    }
    cout<<ans;
    return 0;
}