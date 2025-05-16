#include <bits/stdc++.h>
#define int long long
using namespace std;

int f[101][101],s[101];

signed main() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        s[i]=s[i-1]+x;

    }
    memset(f,127/3,sizeof(f));
    for(int i=1;i<=n;i++)
    {
        f[i][i]=0;
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int k=i;k<=j-1;k++)
            {
                f[i][j]=min(f[i][j],f[i][k]+f[k+1][j]+s[j]-s[i-1]);
            }
        }
    }
    cout<<f[1][n];
    return 0;
}