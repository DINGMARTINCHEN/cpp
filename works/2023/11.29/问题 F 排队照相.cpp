#include<bits/stdc++.h>
using namespace std;
long long int a[99999],b[99999],c,n,sum1=0,sum2=0;
bool compare(long long x,long long y)
{
    if(x>y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        cin>>c;
        if(c%2==0)
        {
            b[i]=c;
            sum2++;//Å®
        }
        else
        {
            a[i]=c;
            sum1++;//ÄÐ
        }
    }
    sort(a,a+n,compare);
    sort(b,b+n,compare);
    for(int i=sum1-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<sum2;i++)
    {
        cout<<b[i]<<" ";
    }
}