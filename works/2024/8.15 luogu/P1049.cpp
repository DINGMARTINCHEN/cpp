#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int a[35];
    int dp[20005];
    int v,n;
    cin>>v>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=v;j>=a[i];j--)
        {
            dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
        }
    }
    cout<<v-dp[v];
    return 0;
}

// air3  47
// air2pro 94
// air2 94
// free3 94