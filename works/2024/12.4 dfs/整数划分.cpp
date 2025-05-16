#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[9],n,k,s;

void dfs(int x)
{
    if(n==0)return ;
    if(x==k)
    {
        if(n>=a[x-1])
        {
            s++;
        }
        return ;
    }
    for(int i=a[x-1];i*(k-x+1)<=n;i++)
    {
        a[x]=i;
        n-=i;
        dfs(x+1);
        n+=i;
    }
}

signed main() 
{
    cin>>n>>k;
    a[0]=1;
    dfs(1);
    cout<<s<<endl;
    return 0;
}