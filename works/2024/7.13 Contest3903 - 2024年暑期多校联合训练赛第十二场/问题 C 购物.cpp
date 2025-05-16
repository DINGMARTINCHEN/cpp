#include<bits/stdc++.h>
using namespace std;

typedef long long ull;

const ull N=1e5;

ull dp[N];

void process()
{
    memset(dp,N,sizeof(dp));
    ull n,a,b,x,y,z;
    cin>>n>>a>>b>>x>>y>>z;
    dp[0]=0;
    for(ull i=1;i<=n;i++)
    {
        dp[i]=min(dp[i-1]+x,dp[i]);
        if(i>=a)
        {
            dp[i]=min(dp[i-a]+y,dp[i]);
        }
        if(i>=b)
        {
            dp[i]=min(dp[i-b]+z,dp[i]);
        }
    }
    cout<<dp[n];
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        process();
        cout<<endl;
    }
}