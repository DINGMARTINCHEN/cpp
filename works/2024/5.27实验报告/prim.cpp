#include <bits/stdc++.h>
using namespace std;

struct eedge
{
    int x, y;
    int w;
} e[99999];
int fa[99999];
int rraa[99999];
int sum;
int cmp(eedge a, eedge b) // 排序函数
{
    if (a.w != b.w)
        return a.w < b.w;
    else
    {
        return a.x < b.x;
    }
}
void make_set(int x) // 初始化节点
{
    fa[x] = x;
    rraa[x] = 0;
}
int find(int x) // 查找父节点
{
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

void union_set(int x, int y, int w) // 合并节点
{
    if (rraa[x] > rraa[y])
    {
        rraa[y] = x;
    }
    else if (rraa[x] < rraa[y])
    {
        rraa[x] = y;
    }
    else
    {
        rraa[x]++;
        rraa[y] = x;
    }
    sum += w; // 总权值加上w
}
int main()
{
    int x, y, w;
    int m, n; // n是点,m是边
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> w;
        e[i].x = x;
        e[i].y = y;
        e[i].w = w;
        make_set(x);
        make_set(y);
    }
    sort(e, e + m, cmp);
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        x = find(e[i].x);
        y = find(e[i].y);
        w = e[i].w;
        if (x != y)
        {
            union_set(x, y, w);
        }
    }
    cout << sum << endl;
    return 0;
}