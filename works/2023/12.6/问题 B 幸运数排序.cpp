#include<bits/stdc++.h>
using namespace std;
int gcd(long long a,long long b)                 
{
    if(a<b)
    {
        swap(a,b);
    }
	if(a%b==0)                    
		return b;                   
	else
		return gcd(b,a%b);
}
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
long long a[999999],b[999999];
int main()
{
    long long n,m,sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(gcd(a[i],m)<=3)
        {
            b[i]=a[i];
            a[i]=0;
        }
        else
        {
            sum++;
        }
    }
    sort(b,b+n,compare);
    sort(a,a+n,compare);
    for(int i=0;i<sum;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=n-sum-1;i>=0;i--)
    {
        cout<<b[i]<<" ";
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<gcd(a[i],m)<<" ";
    // }
}