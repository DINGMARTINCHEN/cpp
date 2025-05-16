#include <bits/stdc++.h>
#define fi first
#define se second
#define int long long

using namespace std;

typedef pair<int, int> PII;
typedef long long LL;

int n, k;
int r[10], a[10];

void dfs(int pos) {
	if (pos > n) {
		int tot = 0;
		for (int i = 1; i <= n; i ++)
			tot += a[i];
		if (tot % k == 0) {
			for (int i = 1; i <= n; i ++) cout << a[i] << " ";
			cout << endl;
		}
		return;
	}
	for (int i = 1; i <= r[pos]; i ++)
		a[pos] = i, dfs(pos + 1);
}

signed main() {

	cin >> n >> k;
	for (int i = 1; i <= n; i ++)
		cin >> r[i];

	dfs(1);

	return 0;
}
