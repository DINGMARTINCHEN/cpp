#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    if(n%2==0)
    {
        for(int i=0;i<n/2;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        if(n==3)
        {
            cout<<3;
            return 0;
        }
        for(int i=0;i<n/2-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
}