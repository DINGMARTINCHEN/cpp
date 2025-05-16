#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int t,m;
    xin>>t>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>b[i]>>c[i];
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=t;j>=b[i];j--)
        {
            p[j]=max(p[j],p[j-b[i]]+c[i]);  
        }
    }
    cout<<p[t];
    return 0;
}