#include<bits/stdc++.h>
#define int long long 
 
using namespace std;
 
signed main() {
	int n, m;
	cin >> n >> m;
	int ans= 0;
	int a[n + 10];
	int last = -1;
	for(int i = 1; i <= n; i ++ ) {
		cin >> a[i];
		if(last == -1) {
			last = a[i];
			ans ++;
		} else {
			if(a[i] - last >= m ) {
				ans ++ ;
				last = a[i];
			}
		}
	}
	cout << ans << endl;
	return 0;
}