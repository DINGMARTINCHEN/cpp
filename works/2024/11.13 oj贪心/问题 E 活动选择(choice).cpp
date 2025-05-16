#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=1007;

struct activity
{
    int x,y;
}a[N];

bool cmp(activity b,activity c)
{
    return b.y<c.y;
}

signed main() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1,a+n+1,cmp);
    int t=a[1].y;
    int ans=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i].x>=t)
        {
            ans++;
            t=a[i].y;
        }
    }
    cout<<ans;
    return 0;
}