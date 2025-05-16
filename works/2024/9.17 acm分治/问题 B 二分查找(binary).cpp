#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f;
    cin>>f;
    int ans=lower_bound(a,a+n,f)+1-a;
    if(ans!=n+1)
    {
        cout<<ans;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}