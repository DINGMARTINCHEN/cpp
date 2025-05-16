#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    pair<int,int>a[1007];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].second>>a[i].first;
    }
    sort(a+1,a+n+1);
    int ans=1,cur=a[1].first;
    for(int i=2;i<=n;i++)
    {
        if(a[i].second>=cur)
        {
            ans++;
            cur=a[i].first;
        }
    }
    cout<<ans;
    return 0;
}