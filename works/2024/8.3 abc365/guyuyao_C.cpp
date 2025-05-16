#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+7;
ll n,m,a[N];
bool check(ll mid)
{
    ll s=0;
    for(int i=1;i<=n;i++)
    {
        s+=min(a[i],mid);
        if(s>m)
            return 0;
    }
    return 1;
}
int main()
{
    cin>>n>>m;
    ll sum=0;
    for(int i=1;i<=n;i++)
    cin>>a[i],sum+=a[i];
    if(sum<=m)
    {
        cout<<"infinite";
        return 0;
    }
    ll l=0,r=m,mid;
    while(l<r)
    {
        mid=(l+r+1)>>1;
        if(check(mid))
            l=mid;
        else
            r=mid-1;
    }
    cout<<l<<endl;
}