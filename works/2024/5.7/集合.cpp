#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);

    for(int i=0;i<n;i++)
    {
        if(a[i]<100)
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<m;i++)
    {if(b[i]<100)
        cout<<b[i]<<" ";
    }
    cout<<endl;

    int c[n+m];
    for(int i=0;i<n+m;i++)
    {
        if(i<n)
        {
            c[i]=a[i];
        }
        if(i>=n)
        {
            c[i]=b[i-n];
        }
    }
    sort(c,c+m+n);
    for(int i=0;i<m+n;i++)
    {
        if(c[i]==c[i+1])
        {
            i++;
        }
        if(c[i]<100)
        cout<<c[i]<<" ";
    }
}