#include <bits/stdc++.h>
#define int long long
using namespace std;

struct aaaaa
{
    int v,cost;
}a[100005];

bool cmp(aaaaa a,aaaaa b)
{
    return a.v>b.v;
}

signed main() 
{
    int n;
    cin>>n;
    int x,y,z,t;
    cin>>x>>y>>z>>t;
    int m=t+z;
    for(int i=0;i<n;i++)
    {
        int ta,tb,tc;
        cin>>ta>>tb>>tc;
        a[i].v=ta+tb;
        a[i].cost=tc;
    }
    sort(a,a+n,cmp);
    int maxn=x+y;
    for(int i=0;i<n;i++)
    {
        if(m>=a[i].cost)
        {
            maxn=max(maxn,a[i].v);
        }
        
    }
    cout<<maxn;
    return 0;
}