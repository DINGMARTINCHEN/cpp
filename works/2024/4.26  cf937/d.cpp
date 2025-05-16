#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int a[31] = {10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 100000};
void solve() {
	cin >> n;
	bool f1 = 1;
	while (n != 1 && f1) {
		//cout << n << "\n";
		f1 = 0;
		for (int i = 30; i >= 0; i--) {
			if (n % a[i] == 0) {
				f1 = 1;
				n /= a[i];
				break;
			}
		}
	}
	if (n != 1) cout << "NO" << "\n";
	else cout << "YES" << "\n";
}
int main()
{
	int t;
	cin >> t;
	
	while (t--) {
		solve();
	}
}