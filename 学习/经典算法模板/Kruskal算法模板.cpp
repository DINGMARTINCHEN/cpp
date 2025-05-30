//Kruskal算法求最小生成树 
#include<bits/stdc++.h>

using namespace std;
const int MAXN=5000+5;
const int MAXM=200000+5;
const int INF=0x3fffffff;

struct edge{
	int u;
	int v;
	int w;
}e[MAXM];
int f[MAXN],cnt,m,n,ans;

bool cmp(edge x,edge y)//根据权重排序
{
	return x.w<y.w;
}

int find(int x)//查找并查集
{
	if(f[x]==x)
		return x;
	else
	{
		f[x]=find(f[x]);//路径压缩
		return f[x];
	}
}

void Kruskal()
{
	sort(e+1,e+m+1,cmp);
	for(int i=1;i<=m;i++)
	{
		int u=find(e[i].u);
		int v=find(e[i].v);
		if(u==v)continue;//判断两个点是否在同一颗树,同一棵树则成环跳过
		ans+=e[i].w;
		printf("%d->%d 权重:%d\n",u,v,e[i].w);
		f[u]=v;//v点的父亲为u，意思为(u,v)这条边加入
		cnt++;
		if(cnt==n-1) break;//所有的点构成构成一棵树
	}
}

int main()
{
	printf("输入点的数目:");
	cin>>n;
	printf("输入边的数目:");
	cin>>m;
	for(int i=1; i<=n; i++)//初始化，开始时每一个点都在各自的集合
		f[i]=i;
	printf("输入边:\n");
	for(int i=1; i<=m; i++)
		cin>>e[i].u>>e[i].v>>e[i].w;
	Kruskal();
	printf("总权重:%d",ans);
	return 0;
}

