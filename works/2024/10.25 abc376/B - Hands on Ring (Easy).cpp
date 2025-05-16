#include <bits/stdc++.h>
using namespace std;
using LL = long long;
 
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    int l = 0, r = 1;
    int ans = 0;
    auto inner = [](int l, int m, int r) { return l < m && m < r; };
    auto step = [&](int s, int t, int b) {
        if (s == t)
            return 0;
        if (s > t)
            t += n;
        if (inner(s, b, t) || inner(s, b + n, t))
            return n - (t - s);
        else
            return t - s;
    };
    while (q--) {
        string s;
        int p;
        cin >> s >> p;
        --p;
        if (s[0] == 'L') {
            ans += step(l, p, r);
            l = p;
        } else {
            ans += step(r, p, l);
            r = p;
        }
    }
    cout << ans << '\n';
 
    return 0;
}
 