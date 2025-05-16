#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

struct pp
{
    ll start,end;
}a[1000009];

bool cmp(pp a,pp b)
{
    return a.end<b.end;
}

int main() 
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++) cin>>a[i].start>>a[i].end;
    sort(a,a+n,cmp);
    ll temp=a[0].end,sum=1;
    for(ll i=0;i<n;i++)
    {
        if(a[i].start>=temp)
        {
            sum++;
            temp=a[i].end;
        }
    }
    cout<<sum;
    return 0;
}