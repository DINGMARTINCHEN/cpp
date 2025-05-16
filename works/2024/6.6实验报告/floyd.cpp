#include<bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int N = 200;
int g[N + 1][N + 1], n;

void floyd()
{
    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);  //以k为中间点，找到更小的距离
            }
        }
    }
        
}

int main()
{
    int m, u, v, w;
    cin>>n>>m;
    memset(g, INF, sizeof(g));//初始化，使每个点之间的距离最大（无穷）
    for (int i=1;i<=m;i++) //存图
    {
        cin>>u>>v>>w;
        if (w<g[u][v])
        {
            g[u][v]=w;
            g[v][u]=w;
        }
    }
    floyd();
    cin>>u>>v;
    if(u==v)//同一点
    {
        cout<<0;
    }
    else if(g[u][v]<INF)//两点之间没有直接通路，使用计算出的最短路径
    {
        cout<<g[u][v];
    }
    else//两点之间不通
    {
        cout<<-1;
    }
    return 0;
}
