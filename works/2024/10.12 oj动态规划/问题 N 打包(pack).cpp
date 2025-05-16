#include <bits/stdc++.h>
using namespace std;

int f[400][400];

int main() {
	int n, g, t, v, G, V;
	cin >> G >> V >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t >> g >> v;
		for (int j = G; j >= g; j--) {
			for (int k = V; k >= v; k--) {
				f[j][k] = max(f[j][k], f[j - g][k - v] + t);
			}
		}
	}
	cout << f[G][V];
}