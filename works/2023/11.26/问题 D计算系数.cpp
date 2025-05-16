#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long a,b,k,n,m;
    cin>>a>>b>>k>>n>>m;
    long long q=1;
    if(a==0)
    {
        for(int i=0;i<m;i++)
        {
            q*=b;
            q%=10007;
        }
        cout<<q;
        return 0;
    }
    if(b==0)
    {
        for(int i=0;i<n;i++)
    {
        q*=a;
        q%=10007;
    }
    cout<<q;
    return 0;
    }
    if(k==0)
    {
        cout<<1;
        return 0;
    }
    if(n==0)
    {
        for(int i=0;i<m;i++)
    {
        q*=k;
        q%=10007;
        k--;
    }
     for(int i=m;i>=1;i--)
    {
        q/=i;
        q%=10007;
    }
    for(int i=0;i<m;i++)
    {
        q*=b;
        q%=10007;
    }
    cout<<q;
        return 0;
    }

    if(m==0)
    {
        for(int i=0;i<n;i++)
    {
        q*=a;
        q%=10007;
    }
    cout<<q;
        return 0;
    }



    for(int i=0;i<m;i++)
    {
        q*=k;
        q%=10007;
        k--;
    }
    for(int i=m;i>=1;i--)
    {
        q/=i;
        q%=10007;
    }
    for(int i=0;i<n;i++)
    {
        q*=a;
        q%=10007;
    }
    for(int i=0;i<m;i++)
    {
        q*=b;
        q%=10007;
    }
    cout<<q%10007;
}