#include<bits/stdc++.h>
using namespace std;
#define inf 1000000000
typedef long long ll;

const int maxn = 200;
ll d[maxn];//�����s������u�����·��Ϊd[u]; 
bool visit[maxn];//�ж��Ƿ���ʹ� 
int Graph[maxn][maxn];//·��ͼ 

//��ĿҪ�� 
int N, M;
int start, end1; 

void Dijkstra(int s)
{
	fill(d, d+N, inf);
	memset(visit, 0, sizeof(visit));
	d[s] = 0;//���s��s��·��Ϊ0 
	for(int i=0;i<N;i++)//ѭ��n�� 
	{
		int u=-1, MIN = inf;
		for(int j=0;j<N;j++)//Ѱ��û�б����ʹ��ġ���̵�·�� 
		{
			if(visit[j] == false && d[j]<MIN)
            {
				MIN = d[j];
				u = j;
			}
		}
		if(u == -1)//��ʾû���ҵ��������sû�е���������·�� 
			return;
		visit[u] = true;//���ʶ���u 
		for(int v=0;v<N;v++)//��uΪ�н�㣬����d[v] 
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
			//̫���˰� 
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
