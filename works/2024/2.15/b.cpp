#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    // long long max=0,sum=0;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        // sum=a[i]+sum;
        // if(max<a[i])
        // {
        //     max=a[i];
        // }
    }
    // cout<<sum-max;
    sort(a,a+n);
    long long sum=a[0]+a[1];
    for(long long i=2;i<n;i++)
    {
        int c=a[i]+sum;
        sum+=c;
    }
    cout<<sum;
}