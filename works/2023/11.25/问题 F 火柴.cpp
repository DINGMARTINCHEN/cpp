#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(long long i=0;i<n;i++)
    {
        if(a[i]==a[i+1]&&a[i+1]==a[i+2]&&a[i+3]==a[i])
        {
            if(a[i]!=0)
            {
                a[i]=a[i+1]=a[i+2]=a[i+3]=0;
                sum++;
            }
        }
    }
    cout<<sum;
}