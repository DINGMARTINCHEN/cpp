#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

void solve()
{
    int a[101];
    memset(a,0,sizeof(a));
    int l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2;
    for(int i=l1;i<=r1;i++)
    {
        a[i]++;
    }
    for(int i=l2;i<=r2;i++)
    {
        a[i]++;
    }
    int sum=0;
    bool flag=0;
    for(int i=1;i<=100;i++)
    {
        if(a[i]==2)
        {
            flag=1;
            sum++;
        }
    }
    if(a[l1]==2 && a[l1-1]==1) 
    {
        sum++;
    }
    if(a[r1]==2 && a[r1+1]==1)  
    {
        sum++;
    }
    if(a[l2]==2 && a[l2-1]==1)  
    {
        sum++;
    }
    if(a[l1]==2 && a[l1-1])
    {
        sum++;
    }
    if(a[r1]==2 && a[r1+1])
    {
        sum++;
    }
    if(a[l2]==2 && a[l2-1]) 
    {
        sum++;
    }
    if(a[r2] && a[r2+1]) 
    {
        sum++;
    }
    if(!flag)   cout<<1<<'\n';
    else cout<<sum-1<<"\n";
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        solve();
    }
    return 0;
}