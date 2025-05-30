#include <bits/stdc++.h>

using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

void solve() {
    int l, r;
    std::cin >> l >> r;
    
    int ans = 0;
    int min = -1;
    for (int x = 1, t = 1; x <= r; x *= 3, t++) {
        if (l >= x) {
            min = t;
        }
        ans += std::max(0, std::min(r, 3 * x - 1) - std::max(l, x) + 1) * t;
    }
    ans += min;
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}