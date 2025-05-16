#include<bits/stdc++.h>
#define int long long
 
using namespace std;
 
signed main() {
	int n;
	cin >> n;
	int a[n + 10];
	int b[n + 10];
	for(int i = 1; i <= n; i ++ ) {
		cin >> a[i];
	}
	for(int i = 1; i <= n - 1; i ++ ) {
		cin >> b[i];
	}
	sort(a + 1, a + n + 1);
	sort(b + 1, b + n - 1 + 1);
	int r = n - 1;
	for(; r >= 1; r -- ) {
		if(b[r] < a[r + 1]) {
			break;
		}
	}
	r ++ ;
	int l = 1;
	for(; l < r; l ++ ) {
		if(b[l] < a[l]) {
			break;
		}
	} 
	l--;
	if(r - l != 1) {
		cout << -1 << endl;
	} else {
		cout << a[l + 1] << endl;
	}
	
	return 0;
}