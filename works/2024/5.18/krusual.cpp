#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <algorithm>
#include<cstring>

using namespace std;
const int N = 1e5 + 10, M = 2e5 + 10, INF = 0x3f3f3f3f;
int n, m, p[N];

struct Edge
{
    int a, b, w;
    bool operator<(const Edge& rhs) const
    {
        return w < rhs.w;
    }
} edges[M];

// 查找节点 x 的根节点（使用路径压缩优化）
int find(int x)
{
    if (p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}

// Kruskal 算法计算最小生成树的权值和
int kruskal()
{
    // 按边权值从小到大排序
    sort(edges, edges + m);

    // 初始化每个节点的父节点为自身
    for (int i = 1; i <= n; ++i)
        p[i] = i;

    int res = 0; // 最小生成树的权值和
    int cnt = 0; // 已经选择的边数

    // 遍历每条边
    for (int i = 0; i < m; ++i)
    {
        int a = edges[i].a, b = edges[i].b, w = edges[i].w;

        // 查找节点 a 和节点 b 所在的连通分量的根节点
        a = find(a);
        b = find(b);

        if (a != b) // 如果 a 和 b 不在同一个连通分量中，即选择这条边
        {
            cnt++;
            res += w; // 更新最小生成树的权值和
            p[a] = b; // 将 a 所在的连通分量合并到 b 所在的连通分量中
        }
    }

    // 如果最小生成树的边数小于 n - 1，则说明图不连通，返回 INF
    if (cnt < n - 1)
        return INF;

    return res; // 返回最小生成树的权值和
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m; // 输入节点数和边数

    for (int i = 0; i < m; ++i)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edges[i] = {a, b, w}; // 保存边的信息
    }

    int t = kruskal(); // 计算最小生成树的权值和

    if (t == INF)
        cout << "impossible" << endl;
    else
        cout << t << endl; // 输出最小生成树的权值和
}

