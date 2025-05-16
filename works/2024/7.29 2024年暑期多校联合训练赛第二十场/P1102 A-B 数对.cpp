#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    ll n,c;
    cin>>n>>c;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        sum+=upper_bound(a,a+n,a[i]+c)-lower_bound(a,a+n,a[i]+c);

    }
    cout<<sum;
    return 0;
}