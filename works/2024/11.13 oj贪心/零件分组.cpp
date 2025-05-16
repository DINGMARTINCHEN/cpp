#include<iostream>
#include<cstdio>
#include<utility>
#include<algorithm>
using namespace std;
#define x first
#define y second
const int N=1007;
pair<int,int> pii[N];
int p[N],cnt;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) scanf("%d%d",&pii[i].x,&pii[i].y);
	sort(pii+1,pii+n+1);
	for(int i=1;i<=n;i++)
	{
		int k=0,mx=0;
		for(int j=1;j<=cnt;j++)
		{
			if(p[j]>pii[i].y) continue;
			if(mx<p[j]) 
			{
				k=j;mx=p[j];}
		}
		if(k==0) {
			cnt++;p[cnt]=pii[i].y;
		}
		else p[k]=pii[i].y;
	}
	cout<<cnt<<endl;
	return 0;
}
