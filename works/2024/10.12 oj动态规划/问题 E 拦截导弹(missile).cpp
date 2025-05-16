#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int a[1005],dp1[1005],dp2[1005],ans=0,cnt=0;
    int n=1;
    while(cin>>a[n])
    {
        ++n;
    }
    --n;
    for(int i=1;i<=n;i++)
    {
        dp1[i]=dp2[i]=1;
        for(int j=1;j<i;j++)
        {
            if(a[j]>=a[i])
            {
                dp1[i]=max(dp1[i],dp1[j]+1);
            }
            else
            {
                dp2[i]=max(dp2[j]+1,dp2[i]);
            }
        }
        ans=max(ans,dp1[i]);
        cnt = max(cnt,dp2[i]);
    }
    cout<<ans<<endl<<cnt;
    return 0;
}