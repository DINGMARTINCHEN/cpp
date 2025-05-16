#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int dx,dy,sum=0;

void dfs(int x,int y)
{
    if(x==dx&&y==dy)
    {
        sum++;
        return ;
    }
    if(x>dx||y>dy||x<0||y<0)
    {
        return;
    }
    dfs(x+1,y+2);
    dfs(x+1,y-2);
    dfs(x+2,y-1);
    dfs(x+2,y+1);
}

signed main() 
{
    cin>>dy>>dx;
    dfs(0,0);
    cout<<sum;
    return 0;
}