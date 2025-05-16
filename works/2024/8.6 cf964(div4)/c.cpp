#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

struct pann
{
    int l,r;
};

int solve()
{
    int n,s,m;
    cin>>n>>s>>m;
    pann a[n];
    cin>>a[0].l>>a[0].r;
    int maxgap=a[0].l;
    for(int i=1;i<n;i++)
    {
        cin>>a[i].l>>a[i].r;
        int gap=a[i].l-a[i-1].r;
        if(gap>maxgap)
        {
            maxgap=gap;
        }
    }
    maxgap=max(maxgap,m-a[n-1].r);
    if(maxgap>=s)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
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