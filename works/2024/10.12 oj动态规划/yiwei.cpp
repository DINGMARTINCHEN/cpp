#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int m,n;
    int w[1005],c[1005],f[1005];
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>c[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int v=w[i];v<=m;v++)
        {
            if(f[v-w[i]]+c[i]>f[v])
            {
                f[v]=f[v-w[i]]+c[i];
            }
        }
    }
    cout<<f[m];
    return 0;
}