#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int n;
    cin>>n;
    n*=2;
    // cout<<n%10;
    while(n!=0)
    {
        cout<<n%10;
        n/=10;
    }
    return 0;
}