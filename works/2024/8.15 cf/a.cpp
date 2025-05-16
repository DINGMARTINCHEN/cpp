#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+50;

int n;
int a[N];

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)   cin>>a[i];
    sort(a+1,a+1+n);
    if(n==2&&a[2]-a[1]>1)
    {
        cout<<"yes"<<endl;
        return;
    }
    cout<<"no"<<endl;
    return;
}

signed main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}