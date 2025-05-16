#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int a[n+2];
    int b[n+2];
    int c[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        c[i]=i;
    }
    for(int i=0;i<k;i++)
    {
        for(int j=1;j<=n;j++)
        {
            b[j]=c[a[j]];
            //b[a[j]]=c[j];
        }
        for(int j=1;j<=n;j++)
        {
            c[j]=b[j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<c[i]<<" ";
    }
}