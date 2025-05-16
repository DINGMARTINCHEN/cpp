#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int w[30],v[30],f[50000];
int n,m;

signed main() 
{
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i]>>w[i];
        w[i]*=v[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=m;j>=v[i];j--)
        {
            if(j>=v[i])
            {
                f[j]=max(f[j],f[j-v[i]]+w[i]);
            }
        }
    }
    cout<<f[m]<<endl;
    return 0;
}