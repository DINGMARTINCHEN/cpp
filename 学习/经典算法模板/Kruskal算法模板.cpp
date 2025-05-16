//Kruskal�㷨����С������ 
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

bool cmp(edge x,edge y)//����Ȩ������
{
	return x.w<y.w;
}

int find(int x)//���Ҳ��鼯
{
	if(f[x]==x)
		return x;
	else
	{
		f[x]=find(f[x]);//·��ѹ��
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
		if(u==v)continue;//�ж��������Ƿ���ͬһ����,ͬһ������ɻ�����
		ans+=e[i].w;
		printf("%d->%d Ȩ��:%d\n",u,v,e[i].w);
		f[u]=v;//v��ĸ���Ϊu����˼Ϊ(u,v)�����߼���
		cnt++;
		if(cnt==n-1) break;//���еĵ㹹�ɹ���һ����
	}
}

int main()
{
	printf("��������Ŀ:");
	cin>>n;
	printf("����ߵ���Ŀ:");
	cin>>m;
	for(int i=1; i<=n; i++)//��ʼ������ʼʱÿһ���㶼�ڸ��Եļ���
		f[i]=i;
	printf("�����:\n");
	for(int i=1; i<=m; i++)
		cin>>e[i].u>>e[i].v>>e[i].w;
	Kruskal();
	printf("��Ȩ��:%d",ans);
	return 0;
}

