#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int solve()
{
    int n;
    cin>>n;
    int a[n];
    int maxj=0,maxo=0,mino=1e9+9,sumo=0,sumj=0;
    int o[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            o[sumo]=a[i];
            sumo++;
            maxo=max(maxo,a[i]);
            mino=min(mino,a[i]);
        }
        else
        {
            sumj++;
            maxj=max(maxj,a[i]);
        }
    }
    if(sumj==0||sumo==0)
    {
        cout<<0<<endl;
        return 0;
    }
    int pre=maxj;
    sort(o,o+sumo);
    for(int i=0;i<sumo;i++)
    {
        if(pre<o[i])
        {
            sumo++;
            cout<<sumo<<endl;
            return 0;
        }
        pre+=o[i];
    }
    cout<<sumo<<endl;
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