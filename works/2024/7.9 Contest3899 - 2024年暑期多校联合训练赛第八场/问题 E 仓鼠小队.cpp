#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long sum=0;
    for(int i=0;i<n;i+=3)
    {
        // cout<<i<<" "<<i+2<<endl;
        // cout<<a[i]<<" "<<a[i+2]<<endl;
        sum+=(a[i+2]-a[i]);
    }
    cout<<sum;
}