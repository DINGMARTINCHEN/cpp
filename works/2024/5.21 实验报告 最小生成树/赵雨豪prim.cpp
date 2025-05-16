// prim �㷨����С������
#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
const int MAX = 505;
int a[MAX][MAX];
int vis[MAX],dist[MAX];
int n,m;
int u,v,w;
long long sum;
int prim(int pos) {
    dist[pos] = 0;
    // һ���� n ����,����Ҫ ���� n ��,ÿ��Ѱ��һ��Ȩֵ��С�ĵ�,��¼���±�
    for(int i = 1; i <= n; i ++) {
        int cur = -1;
        for(int j = 1; j <= n; j ++) {
            if(!vis[j] && (cur == -1 || dist[j] < dist[cur])) {
                cur = j;
            }
        }   
        // ������Ҫ��ǰ��ֹ
        if(dist[cur] >= INF) return INF;
        sum += dist[cur];
        vis[cur] = 1;
        for(int k = 1; k <= n; k ++) {
            // ֻ���»�û���ҵ�����СȨֵ
            if(!vis[k]) dist[k] = min(dist[k],a[cur][k]);
        }
    }
    return sum;
}    
int main(void) {
    scanf("%d%d",&n,&m);
    memset(a,0x3f,sizeof(a));
    memset(dist,0x3f,sizeof(dist));
    for(int i = 1; i <= m; i ++) {
        scanf("%d%d%d",&u,&v,&w);
        a[u][v] = min(a[u][v],w);
        a[v][u] = min(a[v][u],w);
    }
    int value = prim(1);
    if(value >= INF) puts("impossible");
    else printf("%lld\n",sum);
    return 0;
}