#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll N=1e6+10;

ll n,k;
ll a[N];

ll find(ll f,ll start,ll end)
{
    if(start==end)
    {
        if(a[start]==f)
        {
            return start;
        }
        else
        {
            return -1;
        }
    }
    ll mid=start-(start-end)/2;
    if(a[mid]<=f)
    {
        find(f,mid+1,end);
    }
    else
    {
        find(f,start,mid);
    }
}

int main() 
{
    cin>>n>>k;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<k;i++)
    {
        ll b;
        cin>>b;
        cout<<find(b,1,n)<<" ";
    }
    return 0;
}