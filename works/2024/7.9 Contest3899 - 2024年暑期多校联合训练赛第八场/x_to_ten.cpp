#include<bits/stdc++.h>
using namespace std;

long long x_to_ten(string a,long long x)
{
    long long ans=0;
    long long v=0;
    for(long long i=a.size()-1;i>=0;i--)
    {
        long long temp=0;
        if(a[i]<='9'&&a[i]>='0')
        {
            temp=a[i]-'0';
        }
        else
        {
            temp=a[i]-'A'+10;
        }
        ans+=temp*pow(x,v);
        v++;
    }
    return ans;
}

signed main()
{
    string a;
    int x;
    cin>>a>>x;
    long long ss=x_to_ten(a,x);
    cout<<ss;
}