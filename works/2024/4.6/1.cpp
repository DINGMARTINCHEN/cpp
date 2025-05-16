//5078
//2019��CSP-J2�����⣺����Ʒ
//http://47.110.135.197/problem.php?id=5078
#include <cstdio>
#include <cstring>
#include <algorithm>
 
const int MAXN = 1e2 + 2;
int val[MAXN][MAXN] = {};//��¼ÿ����Ʒ�ļ�ֵ
 
const int MAXM = 1e4 + 2;
int f[MAXN][MAXM] = {};
 
int main() {
    int t,n,m;
    scanf("%d%d%d", &t, &n, &m);
 
    //������Ʒ��ֵ��Ϊ�˷�����������Ǵ�1��ʼ
    for(int i=1; i<=t; i++) {
		for(int j=1; j<=n; j++) {
            scanf("%d", &val[i][j]);
        }
    }
 
    //���ݴ���
	for(int i=2; i<=t; i++){//����
        memset(f, 0, sizeof(f));
		for(int j=1; j<=n; j++){//��Ʒ
            for (int k=0; k<=m; k++) {//����
                f[j][k] = f[j-1][k];
                if (k >= val[i-1][j]) {
                    f[j][k] = std::max(f[j][k], f[j][k-val[i-1][j]]-val[i-1][j]+val[i][j]);
                }
            }
        }
        m += f[n][m];//����׬���ļ�ֵ
	}
 
	printf("%d\n", m);
 
    return 0;
}