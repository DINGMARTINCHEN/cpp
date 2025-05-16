#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    bool flag=true;
    for(long long i=0;i<n;i++)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a+b!=c)
        {
            flag=false;
        }
    }
    if(flag==true)
    {
        cout<<"Qty NB";
    }
    else
    {
        cout<<"wjxx";
    }
}