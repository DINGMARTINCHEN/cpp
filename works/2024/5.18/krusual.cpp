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

// ���ҽڵ� x �ĸ��ڵ㣨ʹ��·��ѹ���Ż���
int find(int x)
{
    if (p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}

// Kruskal �㷨������С��������Ȩֵ��
int kruskal()
{
    // ����Ȩֵ��С��������
    sort(edges, edges + m);

    // ��ʼ��ÿ���ڵ�ĸ��ڵ�Ϊ����
    for (int i = 1; i <= n; ++i)
        p[i] = i;

    int res = 0; // ��С��������Ȩֵ��
    int cnt = 0; // �Ѿ�ѡ��ı���

    // ����ÿ����
    for (int i = 0; i < m; ++i)
    {
        int a = edges[i].a, b = edges[i].b, w = edges[i].w;

        // ���ҽڵ� a �ͽڵ� b ���ڵ���ͨ�����ĸ��ڵ�
        a = find(a);
        b = find(b);

        if (a != b) // ��� a �� b ����ͬһ����ͨ�����У���ѡ��������
        {
            cnt++;
            res += w; // ������С��������Ȩֵ��
            p[a] = b; // �� a ���ڵ���ͨ�����ϲ��� b ���ڵ���ͨ������
        }
    }

    // �����С�������ı���С�� n - 1����˵��ͼ����ͨ������ INF
    if (cnt < n - 1)
        return INF;

    return res; // ������С��������Ȩֵ��
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m; // ����ڵ����ͱ���

    for (int i = 0; i < m; ++i)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edges[i] = {a, b, w}; // ����ߵ���Ϣ
    }

    int t = kruskal(); // ������С��������Ȩֵ��

    if (t == INF)
        cout << "impossible" << endl;
    else
        cout << t << endl; // �����С��������Ȩֵ��
}

