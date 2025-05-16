#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int n,k;
int b[10],a[10];

void dfs(int pos)
{
    if(pos>n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=b[i];
        }
        if(sum%k==0)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
        return ;
    }
    for(int i=1;i<=a[pos];i++)
    {
        b[pos]=i;
        dfs(pos+1);
    }
}

signed main() 
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dfs(1);
    return 0;
}