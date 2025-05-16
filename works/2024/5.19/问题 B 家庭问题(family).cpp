#include <bits/stdc++.h>
using namespace std;
#define N 105
vector<int> edge[N];
int n, m, num, mx, ct;
bool vis[N];
void init()
{
	int f, t;
	cin >> n >> m;
	for(int i = 1; i <= m; ++i)
	{
		cin >> f >> t;
		edge[f].push_back(t);
		edge[t].push_back(f);
	}
}
void dfs(int u)
{
	for(int i = 0; i < edge[u].size(); ++i)
	{
		int v = edge[u][i];
		if(vis[v] == false)
		{
			ct++;
			vis[v] = true;
			dfs(v);
		}
	}
}
int main()
{
	init();
	for(int i = 1; i <= n; ++i)	
	{
		if(vis[i] == false)
		{
			num++;
			ct = 1;
			vis[i] = true;
			dfs(i);
			mx = max(mx, ct);
		}
	}
	cout << num << ' ' << mx;
	return 0;
}