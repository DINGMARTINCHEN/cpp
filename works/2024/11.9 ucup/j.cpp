#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=2e5+5;

int a[N],sum[N];
map<int,int>p;

struct pname
{
    int x,y;
}f[N];

void dsc()
{
    int n,m,k,ans=0;
    cin>>n;//朋友
    cin>>m;//评论
    cin>>k;//所有人
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        p[a[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>f[i].x>>f[i].y;
        if(p[f[i].x]!=0&&p[f[i].y])
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        dsc();
    }
    return 0;
}