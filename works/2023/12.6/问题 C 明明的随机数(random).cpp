#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[9999],sum=0,b[9999];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
        {
            b[sum]=a[i];
            sum++;
        }
    }
    cout<<sum<<endl;
    for(int i=0;i<sum;i++)
    {
        cout<<b[i]<<" ";
    }
}