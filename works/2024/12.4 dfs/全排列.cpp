#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,p[10],h[10]={0};

void dfs(int x)
{
    if(x==n+1)
    {
        for(int i=1;i<=n;i++)
        {
            // cout<<p[i]<<" ";
            printf("%lld ",p[i]);
        }
        // cout<<endl;
        printf("\n");
        return ;
    }
    for(int i=1;i<=n;i++)
    {
        if(h[i]==0)
        {
            p[x]=i;
            h[i]=1;
            dfs(x+1);
            h[i]=0;
        }
    }
}

signed main() 
{
    // cin>>n;
    scanf("%lld",&n);
    dfs(1);
    return 0;
}