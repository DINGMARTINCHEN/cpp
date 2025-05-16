#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

void solve()
{
    int n;
    cin>>n;
    int a[n+2];
    memset(a,0,sizeof(a));
    // a[0]=1,a[n+1]=1;
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        int s;
        cin>>s;
        if(a[s+1]==1||a[s-1]==1||i==1)
        {
            a[s]++;
        }
        else
        {
            flag=1;
            // cout<<"==="<<s<<"====";
        }
    }
    if(flag==1)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
    return ;
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
// 1 2 3 4 5 
//   1   1 1