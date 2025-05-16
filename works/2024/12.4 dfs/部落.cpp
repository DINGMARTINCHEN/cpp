#include<bits/stdc++.h>
using namespace std;
int ans[155],res,use[155],n,m;
bool mp[155][155];

bool js(int x)
{
	for (int i=1; i<=n; i++)
		if (use[i]&&mp[x][i]) return false;
	return true;
}

void dfs(int p,int rs)
{
	int i;
	if (p>n)
	{
		if (rs>res)
		{
			res=rs;
			for (i=1; i<=n; i++) ans[i]=use[i];
		}
		return;
	}
	for (i=1; i<=n; i++)
	{
		if (!use[i]&&js(i))
		{
			use[i]=1;
			dfs(i+1,rs+1);
			use[i]=0;
		}
	}
    dfs(p+1,rs);
}

int main()
{
	int i,j,x,y;
	cin>>n>>m;
	for (i=1; i<=m; i++)
	{
		cin>>x>>y;
		mp[x][y]=mp[y][x]=1;
	}
	dfs(1,0);
	cout<<res<<endl;
	for (i=1; i<=n; i++) cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}