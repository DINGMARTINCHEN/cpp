#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(int a,int b)
{
    return b>a;
}

void dsc()
{
    int n,a[105];
    memset(a,0,sizeof(a));
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        a[b]++;
    }
    if(n==1)
    {
        cout<<0<<endl;
        return ;
    }
    int maxn=0;
    for(int i=1;i<=100;i++)
    {
        maxn=max(a[i],maxn);
    }
    cout<<n-maxn<<endl;
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