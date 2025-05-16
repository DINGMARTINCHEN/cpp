#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int s[100],b[100];
int n;
int ans=1e12;

void dfs(int i,int x,int y)
{
	if(i>n-1)
	{
		if(x==1&&y==0)
		{
			return ;
		}
		ans=min(abs(x-y),ans);
		return ;
	}
	dfs(i+1,x*s[i],y+b[i]);
	dfs(i+1,x,y);
}

signed main() 
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i]>>b[i];
	}
	dfs(0,1,0);
	cout<<ans;
	return 0;
}