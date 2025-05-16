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
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);  //��kΪ�м�㣬�ҵ���С�ľ���
            }
        }
    }
        
}

int main()
{
    int m, u, v, w;
    cin>>n>>m;
    memset(g, INF, sizeof(g));//��ʼ����ʹÿ����֮��ľ���������
    for (int i=1;i<=m;i++) //��ͼ
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
    if(u==v)//ͬһ��
    {
        cout<<0;
    }
    else if(g[u][v]<INF)//����֮��û��ֱ��ͨ·��ʹ�ü���������·��
    {
        cout<<g[u][v];
    }
    else//����֮�䲻ͨ
    {
        cout<<-1;
    }
    return 0;
}
