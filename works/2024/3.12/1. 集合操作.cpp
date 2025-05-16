#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int i=0,j=0;
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
    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m+n;i++)
    {
        if(c[i]==c[i+1])
        {
            i++;
        }
        cout<<c[i]<<" ";
    }
    cout<<endl;
    i=0;
    j=0;
    while(i<n)
    {
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            // cout<<i<<" "<<j<<" "<<a[i]<<"|";
            i++;
        }
        if(a[i]>b[j])
        {
            j++;
        }
        if(a[i]==b[j])
        {
            i++;
            j++;
        }
    }
}