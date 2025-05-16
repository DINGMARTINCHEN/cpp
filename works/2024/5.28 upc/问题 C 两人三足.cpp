#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long n;
    cin>>n;
    long long a[n],b[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(long long i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    long long maxn=0,minn=0;
    for(long long i=0;i<n;i++)
    {
        maxn+=min(a[i],b[n-1-i]);
        minn+=min(b[i],a[i]);
    }
    cout<<minn<<endl<<maxn;
}