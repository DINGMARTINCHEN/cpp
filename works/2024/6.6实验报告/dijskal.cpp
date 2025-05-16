#include <bits/stdc++.h>

using namespace std;
const int INF = ((unsigned int)(-1) >> 1);
const int MAXN = 200;

struct Edge // ±ß
{       
    int v, cost;
    Edge(int v2, int c) {v=v2; cost=c;}
};
struct Node // ½áµã
{       
    int u, cost;
    Node(){}
    Node(int u2, int l) 
    {
        u=u2; 
        cost=l;
    }
    bool operator<(const Node n) const 
    {
        return cost > n.cost;
    }
};

vector<Edge> g[MAXN+1];
int dist[MAXN+1];
bool vis[MAXN+1];

void dijkstra(int start, int n)
{
    priority_queue<Node> q;
    for (int i = 0; i <= n; i++) 
    {
        dist[i] = INF;
        vis[i] = false;
    }
    dist[start] = 0;
    q.push(Node(start, 0));
    Node f;
    while (!q.empty()) 
    {
        f = q.top();
        q.pop();
        int u = f.u;
        if (!vis[u]) 
        {
            vis[u] = true;
            int len = g[u].size();
            for (int i = 0; i < len; i++) 
            {
                int v2 = g[u][i].v;
                if(vis[v2])
                {
                    continue;
                }
                int tempcost = g[u][i].cost;
                int nextdist = dist[u] + tempcost;
                if (dist[v2] > nextdist) 
                {
                    dist[v2] = nextdist;
                    q.push(Node(v2, dist[v2]));
                }
            }
        }
    }
}

int main()
{
    int n, m, u, v, w, s, t;
    cin>>n>>m;
    for(int i=1;i<=m;i++) 
    {
        cin>>u>>v>>w;
        g[u].push_back(Edge(v, w));
        g[v].push_back(Edge(u, w));
    }
    cin>>s>>t;
    dijkstra(s, n);
    if(dist[t]==INF)
    {
        cout<<-1;
    }
    else
    {
        cout<<dist[t];
    }
    return 0;
}
