//例题：Atcoder361 E

#include <bits/stdc++.h>
using namespace std;

//maxv：源点能到的最远点，maxdis:最远点对应的距离, 
const int maxn = 1e4 + 5;
struct Edge{
    int to,next,w;
}edges[2*maxn];
int head[maxn], maxdis,maxv, ne; 

void add(int u, int v, int w) {
	edges[ne] = (Edge) { v, head[u], w };
	head[u] = ne++;
}

//u：dfs的源点，f: u点的父节点，d2s：u点到源点的距离
void dfs(int u, int f, int d2s) {
	if (maxdis < d2s){
		maxdis = d2s;
		maxv = u;
	}
	for (int e = head[u]; e != -1; e = edges[e].next) {
		int v = edges[e].to, w = edges[e].w;
		if (v == f) continue;  //父节点已经访问过，防止重复遍历，相反孩子不会重复遍历。
		dfs(v, u, d2s + w);
	}
}

int main() {
	int e, u, v, w;
	cin >> e;
	memset(head, -1, sizeof(head));
	for (int i = 1; i <= e; i++) {
		cin >> u >> v >> w;
		add(u, v, w), add(v, u, w);
	}
	dfs(1, -1, 0); //从结点1开始遍历，找到最远点maxv及对应的最远距离maxdis
	maxdis = 0;
	dfs(maxv, -1, 0);//从结点maxv开始遍历，找到最远点对应的距离maxdis
	cout << maxdis << endl;
	return 0;
}
