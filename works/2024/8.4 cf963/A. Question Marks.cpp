#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int solve()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int sum[4];
    memset(sum,0,sizeof(sum));
    for(int i=0;i<4*n;i++)
    {
        if(a[i]=='A')
        {
            sum[0]++;
        }
        if(a[i]=='C')
        {
            sum[2]++;
        }
        if(a[i]=='B')
        {
            sum[1]++;
        }
        if(a[i]=='D')
        {
            sum[3]++;
        }
    }
    int suma=0;
    for(int i=0;i<4;i++)
    {
        suma+=min(sum[i],n);
    }
    cout<<suma<<endl;
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