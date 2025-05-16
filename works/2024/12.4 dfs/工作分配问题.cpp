#include<bits/stdc++.h>
using namespace std;
int s[27][27],use[27];
int n,ans=1e8;
void dfs(int l,int va)
{
	if(l>n)
	{
		ans=min(ans,va);
		return;
	}
	if(va>ans)return;
	for(int i=1;i<=n;i++)
	{
		if(!use[i])
		{
			use[i]=1;
			dfs(l+1,va+s[l][i]);
			use[i]=0;
		}
	}
 }
 int main()
 {
 	scanf("%d",&n);
 	for(int i=1;i<=n;i++)
 	for(int j=1;j<=n;j++)scanf("%d",&s[i][j]);
 	dfs(1,0);
 	cout<<ans;
 	return 0;
 }
