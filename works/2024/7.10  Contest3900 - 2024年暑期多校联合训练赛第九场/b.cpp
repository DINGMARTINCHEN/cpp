#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const ull N=1e8;
ull n;
ull a[N],b[N];
int main()
{
    cin>>n;
    for(ull i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ull i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    ull sum=0;
    for(ull i=0;i<n;i++)
    {
        sum+=(a[i]*b[i]);
    }
    cout<<sum;
}