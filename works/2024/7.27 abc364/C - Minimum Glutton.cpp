#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    ll sum=0;
    for(ll i=n-1;i>=0;i--)
    {
        x-=a[i];
        y-=b[i];
        sum++;
        if(x<0||y<0)
        {
            cout<<sum;
            return 0;
        }
    }
    cout<<n;
    return 0;
}

// 1+2+3+4+5+6=21
// 8+7+6+5+4+3=33  +2+1