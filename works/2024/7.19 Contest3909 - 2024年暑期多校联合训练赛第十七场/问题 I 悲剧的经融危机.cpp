#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int n;
    cin>>n;
    int a[10009],b[10009];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=abs(a[i]-b[n-i-1]);
    }
    cout<<sum;
    return 0;
}