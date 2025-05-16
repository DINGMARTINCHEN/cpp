#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    ll sum=0;
    ll l=0,r=n-1;
    while(l<r)
    {
        sum+=pow(a[r]-a[l],2);
        // cout<<"r-- "<<sum;
        r--;
        sum+=pow(a[r]-a[l],2);
        // cout<<" l++ "<<sum<<endl;
        l++;
    }
    sum+=pow(a[n-1],2);
    cout<<sum;
    return 0;
}