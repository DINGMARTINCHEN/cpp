#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=n-k+1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=1;i<=n-k;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}