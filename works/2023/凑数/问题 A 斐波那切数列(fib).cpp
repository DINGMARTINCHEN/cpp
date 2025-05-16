#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[99999],n;
    cin>>n;
    a[1]=0;
    a[2]=a[3]=1;
    for(int i=3;i<=n+1;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<a[n];
}