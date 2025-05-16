#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int solve()
{
    int n;
    cin>>n;
    int sum=n%10;
    sum+=n/10;
    cout<<sum<<endl;
}

signed main() 
{
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}