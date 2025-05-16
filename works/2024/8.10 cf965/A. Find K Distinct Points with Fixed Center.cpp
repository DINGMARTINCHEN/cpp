#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int solve()
{
    int x,y,k;
    cin>>x>>y>>k;
    int sumx=0,sumy=0;
    for(int i=1;i<k;i++)
    {
        int a,b;
        a=i+x;
        b=i+y;
        sumx+=a;
        sumy+=b;
        cout<<a<<" "<<b<<endl;
    }
    cout<<k*x-sumx<<" "<<k*y-sumy<<endl;
    return 0;
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