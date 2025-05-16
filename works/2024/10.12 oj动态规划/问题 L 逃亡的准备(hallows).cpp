#include <bits/stdc++.h>
using namespace std;
int dp[505], u[2005], v[2005], w[2005];
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
    	scanf("%d%d%d", &u[i], &w[i], &v[i]);
    	for (int k = 1; k <= u[i]; k++) {
            for (int j = m; j >= k * w[i]; j--)
            	dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    printf("%d\n", dp[m]);
    return 0;
}