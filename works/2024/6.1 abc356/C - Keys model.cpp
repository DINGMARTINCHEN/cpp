#include <bits/stdc++.h>
using namespace std;
using LL = long long;
 
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<vector<int>, int>> a(m);
    for (auto& [v, c] : a) {
        int x;
        cin >> x;
        v.resize(x);
        for (auto& x : v) {
            cin >> x;
            --x;
        }
        string s;
        cin >> s;
        c = s[0] == 'o';
    }
    int ans = 0;
    int up = (1 << n);
    for (int i = 0; i < up; ++i) {
        bool ok = true;
        for (auto& [v, c] : a) {
            int cnt = 0;
            for (auto x : v) {
                if (i & (1 << x)) {
                    ++cnt;
                }
            }
            if ((cnt >= k) ^ c) {
                ok = false;
                break;
            }
        }
        ans += ok;
    }
    cout << ans << '\n';
 
    return 0;
}
 