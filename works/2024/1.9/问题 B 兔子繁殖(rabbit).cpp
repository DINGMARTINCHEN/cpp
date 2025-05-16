#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[9999];
    a[2]=a[1]=1;
    a[0]=0;
    int n;
    cin>>n;
    for(int i=3;i<n+2;i++)
    {
        a[i]=a[i-2]+a[i-1];
    }
    cout<<a[n];
}