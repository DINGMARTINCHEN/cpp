#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e6+50;

int n,m;
struct node{
    int u,v;
    ll weight;
}a[N];
ll f[N],ans=0,cnt=0;

bool cmp(node x,node y)
{
    return x.weight<y.weight;
}

int  find(int x)
{
    if(x==f[x]) return x;
    else
    {
        f[x]=find(f[x]);
        return f[x];
    }
}

void kruskal()
{
    sort(a+1,a+1+m,cmp);
    for(int i=1;i<=m;i++)
    {
        int u=find(a[i].u);
        int v=find(a[i].v);
        if(u==v) continue;
        ans+=a[i].weight;
        cnt++;
        f[u]=v;
        if(cnt==n-1) break;
    }
}
int main()
{
    memset(f,0,sizeof(f));
    cin>>n>>m;
    for(int i=1;i<=n;i++) f[i]=i;
    for(int i=1;i<=m;i++) cin>>a[i].u>>a[i].v>>a[i].weight;
    kruskal();
    cout<<ans;
}
