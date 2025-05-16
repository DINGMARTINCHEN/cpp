#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int dp[1000][1000];

signed main() 
{
    string a,b;
    cin>>a>>b;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j])
            {
                dp[i+1][j+1]=dp[i-1+1][j-1+1]+1;
            }
            else
            {
                dp[i+1][j+1]=max(dp[i-1+1][j+1],dp[i+1][j-1+1]);
            }
        }
    }
    cout<<dp[a.size()][b.size()];
    return 0;
}