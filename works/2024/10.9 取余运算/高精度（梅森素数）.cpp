#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=1e3+10;

int p,a[N],ans[N];

void solve(int x)
{
    if(!x)
    {
        return;
    }
    solve(x>>1);
    for(int i=1;i<=500;i++)
    {
        for(int j=1;j<=500;j++)
        {
            a[i+j-1]+=x & 1 ? ans[i]*ans[j] << 1 : ans[i]*ans[j];

        }
    }
    for(int i=1;i<=500;i++)
    {
        ans[i]=a[i]%10,a[i+1]+=a[i]/10;

    }
    memset(a,0,sizeof(a));
}


signed main() 
{
    cin>>p;
    cout<<(int)(log10(2)*p+1)<<endl;
    ans[1]=1;
    solve(p);
    --ans[1];
    for(int i=500;i;--i)
    {
        cout<<ans[i];
        if(i%50==1)
        {
            cout<<endl;
        }
    }
    return 0;
}
/*
丁士程1a516最下头的下头男
*/