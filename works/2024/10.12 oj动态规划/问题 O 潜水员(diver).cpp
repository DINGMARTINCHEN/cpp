#include "bits/stdc++.h"
using namespace std;
int sum[22][81];
int main () {
    int m, n, k, a, b, c, t1, t2;
    cin >> m >> n >> k;
    memset(sum, 0x3f, sizeof sum);
    sum[0][0] = 0;
    for (int i = 1; i <= k; i++) {
        cin >> a >> b >> c;
        for (int j = m; j >= 0; j--)
            for (int l = n; l >= 0; l--) {
                t1 = j + a, t2 = l + b;
                if (t1 > m)
                    t1 = m;
                if (t2 > n)
                    t2 = n;
                if (sum[t1][t2] > sum[j][l] + c)
                    sum[t1][t2] = sum[j][l] + c;
            }
    }
    cout << sum[m][n] << endl;
    return 0;
}