#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int sum=0;
    if((a>c&&b>=d)||(b>d&&a>=c))
    {
        sum++;
    }
    if((a>d&&b>=c)||(b>c&&a>=d))
    {
        sum++;
    }
    cout<<sum*2<<endl;
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