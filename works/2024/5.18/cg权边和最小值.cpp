#include<bits/stdc++.h>
#define R register long long
using namespace std;

long long k,n,m,cnt,sum,ai,bi,ci,head[5005],dis[5005],vis[5005];

struct Edge
{
    long long v,w,next;
}e[400005];

void add(long long u,long long v,long long w)
{
    e[++k].v=v;
    e[k].w=w;
    e[k].next=head[u];
    head[u]=k;
}

typedef pair <long long,long long> pii;
priority_queue <pii,vector<pii>,greater<pii> > q;

void prim()
{
    dis[1]=0;
    q.push(make_pair(0,1));
    while(!q.empty()&&cnt<n)
    {
        long long d=q.top().first,u=q.top().second;
        q.pop();
        if(vis[u]) continue;
        cnt++;
        sum+=d;
        vis[u]=1;
        for(R i=head[u];i!=-1;i=e[i].next)
            if(e[i].w<dis[e[i].v])
                dis[e[i].v]=e[i].w,q.push(make_pair(dis[e[i].v],e[i].v));
    }
}

int main()
{
    memset(dis,127,sizeof(dis));
    memset(head,-1,sizeof(head));
    cin>>n>>m;
    for(R i=1;i<=m;i++)
    {
        cin>>ai>>bi>>ci;
        add(ai,bi,ci);
        add(bi,ai,ci);
    }
    prim();
    cout<<sum;
}