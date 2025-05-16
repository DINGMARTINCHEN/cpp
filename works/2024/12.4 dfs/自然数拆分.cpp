#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,a[1000];

void dfs(int x,int u)
{
    if(u==0&&x>2)
    {
        for(int i=1;i<x-1;i++)
        {
            cout<<a[i]<<"+";
        }
        cout<<a[x-1]<<endl;
    }
    for(int i=a[x-1];i<=u;i++)
    {
        a[x]=i;
        u=u-i;
        dfs(x+1,u);
        a[x]=0;
        u=u+i;
    }
}

signed main() 
{
    cin>>n;
    a[0]=1;
    dfs(1,n);
    return 0;
}