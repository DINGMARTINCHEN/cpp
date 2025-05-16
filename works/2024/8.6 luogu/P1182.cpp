#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const int N=1e5+4;

int a[N];
int n,k;

bool check(int mid)
{
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>=mid)
        {
            sum=0;
            ans++;
        }
    }
    if(ans>=k)
    {
        return true;
    }
    else
    {
        return false;
    }
}

signed main() 
{
    cin>>n>>k;
    int r=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        r+=a[i];
    }
    int l=0;
    while(l<r)
    {
        int mid=(l+r+1)/2;
        if(check(mid))
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<l;
    return 0;
}