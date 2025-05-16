#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int n,m,len=1;
int f[1005][1005];

void _plus(int x)
{
    for(int i=1;i<=len;i++)
    {
        f[x][i]=f[x-1][i]+f[x-2][i];
    }
    for(int i=1;i<=len;i++)
    {
        if(f[x][i]>9)
        {
            f[x][i+1]+=f[x][i]/10;
            f[x][i]%=10;
        }
    }
    if(f[x][len+1]!=0)
    {
        len++;
    }
}

int main() 
{
    memset(f,0,sizeof(f));
    cin>>n>>m;

    for(int i=3;i<=n-m;i++)
    {
        _plus(i);
    }
    for(int i=len;i;i--)
    {
        cout<<f[n-m][i];
    }
    return 0;
}