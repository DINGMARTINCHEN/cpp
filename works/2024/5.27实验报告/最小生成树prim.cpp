#include<bits/stdc++.h>
using namespace std;
const int N=0x3f3f3f3f;
int g[104][104];
int n,m;
int dis[N];
bool book[N];
int res;
// struct graph
// {
//     int v;
//     int u;
//     int weight;
// };
void prim()
{
    book[1]=true;
    dis[1]=0;
    for(int i=2;i<=n;i++)
    {
        dis[i]=min(dis[i],g[1][i]);
    }
    for(int i=2;i<=n;i++)
    {
        int temp=N;
        int t=-1;
        for(int j=2;j<=n;j++)
        {
            if(!book[j]&&dis[j]<temp)
            {
                temp=dis[j];
                t=j;
            }
        }
        if(t==-1)
        {
            res=N;
            return ;
        }
        book[t]=true;
        res+=dis[t];
        for(int j=2;j<=n;j++)
        {
            dis[j]=min(dis[j],g[t][j]);
        }
    }
}
int main()
{
    cin>>n>>m;
    // graph a[N];
    // memset(g,N,sizeof(g));
    // memset(dis,N,sizeof(dis));
    for(int i=0;i<m;i++)
    {
        int aa,bb,cc;
        cin>>aa>>bb>>cc;
        g[aa][bb]=cc;
        g[bb][aa]=cc;
    }
    prim();
    cout<<res;
}