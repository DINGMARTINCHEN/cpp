#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],t;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++)
    {
        swap(a[n-i-1],a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[n-1];
}