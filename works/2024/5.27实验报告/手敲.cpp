#include <bits/stdc++.h>
using namespace std;

double const MAX = 10000000000000.0;
int n, m, tmp[1005], fa[55];
double ans;

struct Edge
{
    int u, v;
    double w, val;
}e[1005];

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

void UF_set(int n)
{
    for(int i = 1; i <= n; i++)
        fa[i] = i;
}

int Find(int x)
{
    return x == fa[x] ? x : fa[x] = Find(fa[x]);
}

void Union(int a, int b)
{
    int r1 = Find(a);
    int r2 = Find(b);
    if(r1 != r2)
        fa[r2] = r1;
}

void Kruskal(int sum)
{
    UF_set(n);
    int cnt = 0;
    double f_all = 0;
    double all = 0;
    double ave = sum * 1.0 / (n - 1);
    for(int i = 0; i < m; i++)
        e[i].w = (e[i].val - ave) * (e[i].val - ave);
    sort(e, e + m, cmp);
    for(int i = 0; i < m; i++)
    {
        int u = e[i].u;
        int v = e[i].v;
        if(Find(u) != Find(v))
        {
            Union(u, v);
            f_all += e[i].w;
            all += e[i].val;
            cnt ++;
        }
        if(cnt == n - 1)
            break;
    }
    if((int)all == sum)
        ans = min(ans, f_all);
}

// int prim(int pos) {
//     w[pos] = 0;
//     for(int i = 1; i <= n; i ++) {
//         int cur = -1;
//         for(int j = 1; j <= n; j ++) {
//             if(!v[j] && (cur == -1 || w[j] < w[cur])) {
//                 cur = j;
//             }
//         }   
//         if(w[cur] >= MAX) return MAX;
//         ans += w[cur];
//         v[cur] = 1;
//         for(int k = 1; k <= n; k ++) {
//             if(!v[k]) w[k] = min(w[k],a[cur][k]);
//         }
//     }
//     return ans;
// }    

    double aaa[9999999];
int main()
{
    int ca = 1;
    while(scanf("%d %d", &n, &m) != EOF && (m + n))
    {
        // if(n == 1 || n == 2)
        // {
        //     printf("0.00\n");
        //     continue;
        // }
        int minv = 0;
        int maxv = 0;
        ans = MAX;
        for(int i = 0; i < m; i++)
        {
            scanf("%d %d %lf", &e[i].u, &e[i].v, &e[i].val);
            tmp[i] = e[i].val;
        }
        sort(tmp, tmp + m);
        for(int i = 0; i < n - 1; i++)
            minv += tmp[i];
        for(int i = m - 1; i > m - n; i--)
            maxv += tmp[i];
        for(int i = minv; i <= maxv; i++)
            Kruskal(i);
        // cout<<ans;
        ans = ans / (n - 1);
        // cout<<"Case "<<ca<<": "<<fixed<<setprecision(2)<<ans<<endl;
        aaa[ca]=ans;
        ca++;
    }
    for(int i=1;i<=ca;i++)
    {
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<aaa[i]<<endl;
    }
}