#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    ll a[n+2];  
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    ll l=1,r=a[n+1];
    while(l<=r)
    {
        ll mid=(l+r)/2;
        ll sum=0;
        for(ll i=1;i<=n;i++)
        {
            if(a[i]>=mid)
            {
                sum+=a[i]-mid;
            }
        }
        if(sum<m)
        {
            r=mid-1;
        }
        else 
        {
            l=mid+1;
        }
    }
    cout<<l-1;
    return 0;
}