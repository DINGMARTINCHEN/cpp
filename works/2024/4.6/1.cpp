//5078
//2019年CSP-J2第三题：纪念品
//http://47.110.135.197/problem.php?id=5078
#include <cstdio>
#include <cstring>
#include <algorithm>
 
const int MAXN = 1e2 + 2;
int val[MAXN][MAXN] = {};//记录每个商品的价值
 
const int MAXM = 1e4 + 2;
int f[MAXN][MAXM] = {};
 
int main() {
    int t,n,m;
    scanf("%d%d%d", &t, &n, &m);
 
    //读入商品价值，为了方便起见，我们从1开始
    for(int i=1; i<=t; i++) {
		for(int j=1; j<=n; j++) {
            scanf("%d", &val[i][j]);
        }
    }
 
    //数据处理
	for(int i=2; i<=t; i++){//天数
        memset(f, 0, sizeof(f));
		for(int j=1; j<=n; j++){//物品
            for (int k=0; k<=m; k++) {//本金
                f[j][k] = f[j-1][k];
                if (k >= val[i-1][j]) {
                    f[j][k] = std::max(f[j][k], f[j][k-val[i-1][j]]-val[i-1][j]+val[i][j]);
                }
            }
        }
        m += f[n][m];//加上赚到的价值
	}
 
	printf("%d\n", m);
 
    return 0;
}