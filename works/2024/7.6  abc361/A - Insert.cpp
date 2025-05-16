#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,x;
    cin>>n>>k>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<k;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<x<<" ";
    for(int i=k;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}