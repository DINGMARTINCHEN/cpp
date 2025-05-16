#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d,n,m,a1,b1,c1,d1,sum=0;
    cin>>a>>b>>c>>d;
    if(a>c)
    {
        n=c;
    }
    else
    {
        n=a;
    }
    if(b>d)
    {
        m=b;
    }
    else
    {
        m=d;
    }
    a1=a-n;
    b1=b-n;
    c1=c-n;
    d1=d-n;
    long long arr[m-n+10];
    for(long long i=a1;i<=b1;i++)
    {
        arr[i]++;
    }
    for(long long i=c1;i<=d1;i++)
    {
        arr[i]++;
    }
    for(long long i=n;i<=m;i++)
    {
        if(arr[i]>=1)
        {
            sum++;
        }
    }
    cout<<sum;
}