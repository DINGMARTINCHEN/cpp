#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[99999];
    a[1]=1;
    a[2]=2;
    a[3]=4;
    int n;
    cin>>n;
    for(int i=4;i<n+9;i++)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    cout<<a[n];
}