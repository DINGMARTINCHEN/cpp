#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    string a;
    cin>>a;
    ll n,i;
    cin>>n;
    ll num=a.length();
    while(num<n)
    {
        i=num;
        while(n>i)i*=2;
        i/=2;
        n-=(i+1);
        if(n==0)n=i;
    }
    cout<<a[n-1];
    return 0;
}