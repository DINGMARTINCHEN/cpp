//【信息学奥赛C++习题讲解 算法部分-递归算法-09-P1164 小A点菜】
//https://www.bilibili.com/video/BV1Yg4y1y7zE?vd_source=19a59d971811ae831d1c24641a2680ff
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

ll a[10009];
int n,m;
ll mem[109][10009];

int dfs(int pos,int s)
{
    int ans=0;
    if(s==m)
    {
        return 1;
    }
    if(s>m)
    {
        return 0;
    }
    if(mem[pos][s])
    {
        return mem[pos][s];
    }
    for(int i=pos;i<n;i++)
    {
        ans+=dfs(i+1,s+a[i]);
    }
    return mem[pos][s]=ans;
}

int main() 
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    memset(mem,0,sizeof(mem));
    cout<<dfs(0,0);
    return 0;
}