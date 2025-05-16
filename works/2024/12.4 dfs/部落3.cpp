#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005],r[10001],s[10001],maxn;
void f(int z,int x)
{
	if(x>n)
	{
		if(z>maxn)
		{
			maxn=z;
			for(int i=1;i<=n;i++)
			{
				s[i]=r[i];
			}
		}
		return ;
	}
	int y=1;
	for(int i=1;i<x;i++)
	{
		if(a[x][i]==1&&r[i])
		{
			y=0;
			break;
		}
	}
	if(y)
	{
		r[x]=1;
		f(z+1,x+1);
		r[x]=0;
	}
	f(z,x+1);
	return ;
}
int main()
{
	int x,y;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		a[x][y]=1,a[y][x]=1;
	}
	f(0,1);
	cout<<maxn<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<s[i]<<" ";
	}
}