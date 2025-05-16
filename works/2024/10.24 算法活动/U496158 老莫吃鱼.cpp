#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int n,x,t;
    cin>>n>>x>>t;
    if((n/x)*x<n)
    {
        cout<<((n/x)+1)*t;
    }
    else
    {
        cout<<n/x*t;
    }

}