#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
const int N = 2e5;
int t;
struct node
{
	int aa,bb,pl;
};
node c[N];
int anss[N];
bool vis[N];
int head;
bool cmp(node a,node b)
{
	return a.aa < b.aa;
}
int n,m,h,w;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&c[i].aa,&c[i].bb);
		c[i].pl=i;
	}
	sort(c+1,c+1+n,cmp);
	int minn=c[n].bb;
	int ans=n;
	for(int i=n;i>=1;i--)
	{
		if(c[i].bb>minn)
		{
			ans--;
			vis[c[i].pl]=1;
		}
		else
		{
			minn=c[i].bb;
		}
	}
	printf("%d\n",ans);
	for(int i=1;i<=n;i++)
	{
		if(!vis[i]) printf("%d ",i);
	}
	return 0;
}
