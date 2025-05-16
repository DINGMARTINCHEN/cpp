#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll sum=0;
    for(ll i=0;i<m;i++)
    {
        ll b;
        cin>>b;
        ll pos=upper_bound(a,a+n,b)-a;
        sum+=min(abs(a[pos]-b),abs(a[pos-1]-b));
    }
    cout<<sum;
    return 0;
}