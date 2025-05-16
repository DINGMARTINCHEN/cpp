#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int process(int a[],int b,int n,int m)
{
    int pos=upper_bound(a,a+n,b)-a-1;
    if(a[pos]<=b&&pos<=n-1&&pos>=0)
    {
        cout<<a[pos]<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}

signed main() 
{
    int n,m;
    cin>>n>>m;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<m;i++)
    {
        process(a,b[i],n,m);
    }
    return 0;
}