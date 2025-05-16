//���⣺Atcoder361 E

#include <bits/stdc++.h>
using namespace std;

//maxv��Դ���ܵ�����Զ�㣬maxdis:��Զ���Ӧ�ľ���, 
const int maxn = 1e4 + 5;
struct Edge{
    int to,next,w;
}edges[2*maxn];
int head[maxn], maxdis,maxv, ne; 

void add(int u, int v, int w) {
	edges[ne] = (Edge) { v, head[u], w };
	head[u] = ne++;
}

//u��dfs��Դ�㣬f: u��ĸ��ڵ㣬d2s��u�㵽Դ��ľ���
void dfs(int u, int f, int d2s) {
	if (maxdis < d2s){
		maxdis = d2s;
		maxv = u;
	}
	for (int e = head[u]; e != -1; e = edges[e].next) {
		int v = edges[e].to, w = edges[e].w;
		if (v == f) continue;  //���ڵ��Ѿ����ʹ�����ֹ�ظ��������෴���Ӳ����ظ�������
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
	dfs(1, -1, 0); //�ӽ��1��ʼ�������ҵ���Զ��maxv����Ӧ����Զ����maxdis
	maxdis = 0;
	dfs(maxv, -1, 0);//�ӽ��maxv��ʼ�������ҵ���Զ���Ӧ�ľ���maxdis
	cout << maxdis << endl;
	return 0;
}
