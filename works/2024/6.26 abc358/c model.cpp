#include <bits/stdc++.h>
using namespace std;
using LL = long long;
 
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> a(n, 0);
    for (auto& x : a) {
        string s;
        cin >> s;
        for (auto c : s) {
            x = x * 2 + (c == 'o');
        }
    }
    int ans = n, up = (1 << n);
    for (int i = 0; i < up; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                cnt |= a[j];
            }
        }
        if (cnt == (1 << m) - 1) {
            ans = min(ans, __builtin_popcount(i));
        }
    }
    cout << ans << '\n';
 
    return 0;
}
 