#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
int n,k;
int a[1000005];

int sum(int mid)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i]/mid;
    }
    return sum;
}

signed main() 
{
    cin>>n>>k;
    int ssum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ssum+=a[i];
    }
    if(ssum<k)
    {
        cout<<0;
        return 0;
    }
    sort(a,a+n);
    int l=0,r=a[n-1];
    int ans=0;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(sum(mid)<k)
        {
            r=mid-1;
        }
        else
        {
            ans=mid;
            l=mid+1;
        }
    }
    cout<<ans;
    return 0;
}
