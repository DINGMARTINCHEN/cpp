#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=1e4+5;

int s[N],t[N],f[N];

signed main()
{
    int m,n;
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i]>>t[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=t[i];j<=m;j++)
        {
            f[j]=max(f[j],f[j-t[i]]+s[i]);
        }
    }
    cout<<f[m];
}