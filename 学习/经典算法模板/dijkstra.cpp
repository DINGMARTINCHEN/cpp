//�Ż����dijkstra
//ʱ�临�Ӷ� O(mlogn), n ��ʾ����, m ��ʾ����, ������ϡ��ͼ
#include <bits/stdc++.h>
const int N=1e6+7;
const int inf=0x3f3f3f;
using namespace std;
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
struct node{
	int len,to,next;
}e[N];
int n,m,s,from,go,val,idx,head[N],dis[N];
bool vis[N];
void add(int from,int go,int val){   //�ڽӱ��ͼ
	idx++;
	e[idx].to=go;
	e[idx].len=val;
	e[idx].next=head[from];
	head[from]=idx;
}
void dij(int A)
{
	q.push(make_pair(0,A));
	memset(dis,0,sizeof dis);
	dis[A]=0;
	while(!q.empty()){
		int now=q.top().second;
		q.pop();
		if(vis[now]) continue;
		vis[now]=1;
		for(int i=head[now];i;i=e[i].next){
			if(dis[now]+e[i].len<dis[e[i].to]){
				dis[e[i].to]=dis[now]+e[i].len;
				q.push(make_pair(dis[e[i].to],e[i].to));
			}
		}
	}
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++){
		scanf("%d%d%d",&from,&go,&val);
		add(from,go,val);
	}
	dij(s);
	for(int i=1;i<=n;i++){
		if(dis[i]==inf){
			printf("2147483647");
		}
		else{
			printf("%d ",dis[i]);
		}
	}
	return 0;
}
/*
#include <bits/stdc++.h>

using namespace std;
const int maxx=1e3+7;
#define INF 0x3f3f3f3f
int dis[maxx];
int c[maxx][maxx];
int vis[maxx];
int v,n,m;

void init()
{
    memset(dis,INF,sizeof dis);//Դ�㵽���е����̾����ʼΪ�����
    memset(c,INF,sizeof c);
    memset(vis,0,sizeof vis);
}
void dijkstra()
{
    for(int i=1;i<=n;i++) dis[i]=c[v][i];//�ҵ���Դ��ֱ�������ӵĵ㣬���Ҹ���dis
    dis[v]=0;//Դ�㵽�Լ��������Ϊ0
    vis[v]=1;//���Ȱ�Դ����
    for(int i=2;i<=n;i++)
    {
        int temp=INF;
        int u=v;
        for(int j=1;j<=n;j++)//�ҵ���Դ��ֱ�����������Ҿ�����С�ĵ�
        {
            if(!vis[j]&&dis[j]<temp)
            {
                u=j;
                temp=dis[j];
            }
        }
        vis[u]=1;//��������ǣ�֤���Ժ����ʹ���������Ϊ�м���ˣ�
        for(int j=1;j<=n;j++)
        {
            if(!vis[j]&&c[u][j]<INF)//Ȼ���u����Χ�ҵ�һ��ֱ����������û��ʹ�ù��ĵ�
            {
                int newdis=dis[u]+c[u][j];//Ȼ���ж�ʹ��������Ƿ���ʹ�����С���ǵĻ��͸���
                if(newdis<dis[j])
                    dis[j]=newdis;
            }
        }
    }
}

int main()
{
    while(scanf("%d %d",&n,&m)&&n&&m)
    {
        init();//��ʼ������;
        int x,y,t;
        for(int i=1;i<=m;i++)
            cin>>x>>y>>t,c[x][y]=t,c[y][x]=t;//��ͼ 
        v=1;
        dijkstra();
        cout<<dis[n]<<endl;
    }
    return 0;
}

*/

/*
#include<bits/stdc++.h>
using namespace std;
const int N=500010,inf=1e9;
int n,m;
int head[N],w[N],e[N],ne[N],idx;
int dis[N];
bool vis[N];
void add(int a,int b,int c)
{
	e[idx]=b;
	w[idx]=c;
	ne[idx]=head[a];
	head[a]=idx++;
}
void dj()
{
	memset(dis,0x3f,sizeof dis);
	dis[1]=0;
	queue<int>q;
	q.push(1);
	vis[1]=true;
	while(q.size())
	{
		int t=q.front();
		q.pop();
		vis[t]=false;
		for(int i=head[t];i!=-1;i=ne[i])
		{
			int j=e[i];
			if(dis[j]>dis[t]+w[i])
			{
				dis[j]=dis[t]+w[i];
				if(!vis[j])
				{
					q.push(j);
					vis[j]=true;
				}
			}
		}
	}
	for(int i=2;i<=n;i++)
	cout<<dis[i]<<endl;
}
int main()
{
	cin>>n>>m;
	memset(head,-1,sizeof head);
	while(m--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		add(a,b,c);
	}
	dj();
	return 0;
}
 */

