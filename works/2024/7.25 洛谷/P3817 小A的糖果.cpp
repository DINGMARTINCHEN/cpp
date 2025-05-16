#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    ll n;
    cin>>n;
    ll a[n],x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]+a[i-1]>x)
        {
            sum+=(a[i]+a[i-1]-x);
            a[i]-=(a[i]+a[i-1]-x);
        }
        if(a[i]<0)
        {
            a[i-1]+=a[i];
            a[i]=0;
        }
    }
    cout<<sum;
    return 0;
}