#include<stdio.h>
#include<string.h>
 
long long dp[30][30];
 
 
int main() {
	memset(dp, -1, sizeof(dp));
	int n1, m1, n2, m2;
	scanf("%d %d %d %d", &n1, &m1, &n2, &m2);
	for (int i = 0; i < n1 + 1; i++) {
		dp[i][m1 + 1] = 0;
	}
	for (int i = 0; i < m1 + 1; i++) {
		dp[n1 + 1][i] = 0;
	}
	dp[n1][m1] = 1;
	for (int i = n1; i >= 0; i--) {
		for (int j = m1; j >= 0; j--) {
			if ((i - n2) * (i - n2) + (j - m2) * (j - m2) == 5 || i == n2 && j == m2) {
				dp[i][j] = 0;
			}
			if(dp[i][j] == -1) {
				dp[i][j] = dp[i][j + 1] + dp[i + 1][j];
			}
		}
	}
	printf("%lld\n", dp[0][0]);
	return 0;
}