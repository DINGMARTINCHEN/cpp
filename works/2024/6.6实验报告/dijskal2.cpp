#include<bits/stdc++.h>
using namespace std;
#define inf 1000000000
typedef long long ll;

const int maxn = 200;
ll d[maxn];//从起点s到定点u的最短路径为d[u]; 
bool visit[maxn];//判断是否访问过 
int Graph[maxn][maxn];//路线图 

//题目要求 
int N, M;
int start, end1; 

void Dijkstra(int s)
{
	fill(d, d+N, inf);
	memset(visit, 0, sizeof(visit));
	d[s] = 0;//起点s到s的路径为0 
	for(int i=0;i<N;i++)//循环n次 
	{
		int u=-1, MIN = inf;
		for(int j=0;j<N;j++)//寻找没有被访问过的、最短的路径 
		{
			if(visit[j] == false && d[j]<MIN)
            {
				MIN = d[j];
				u = j;
			}
		}
		if(u == -1)//表示没有找到，即起点s没有到达其余点的路径 
			return;
		visit[u] = true;//访问顶点u 
		for(int v=0;v<N;v++)//以u为中介点，更新d[v] 
		{
			if(visit[v]==false && Graph[u][v] != inf && (d[u] + Graph[u][v] < d[v]))
				d[v] = d[u] + Graph[u][v];
		}
	}
}

int main()
{
	while(cin>>N>>M)
	{
		fill(Graph[0], Graph[0] + maxn*maxn, inf);
		int a, b, x;
		for(int i=0;i<M;i++)
		{
			cin>>a>>b>>x;
			//太坑了吧 
			Graph[b][a] = Graph[a][b]=min(Graph[a][b], x);
		}
		cin>>start>>end1;
		Dijkstra(start);
		if(d[end1] == inf)
			cout<<"-1"<<endl;
		else
			cout<<d[end1]<<endl;
	}
	return 0;
}
