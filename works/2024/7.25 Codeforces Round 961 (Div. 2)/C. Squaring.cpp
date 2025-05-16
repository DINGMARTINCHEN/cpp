#include <bits/stdc++.h>
#define LL long long
const int kN = 2e5 + 10;
const double eps = 1e-9;
int n, a[kN]; 
LL ans, f[kN];
bool notsmaller(LL a_, LL f1_, LL b_, LL f2_) {
  double lga = log10(1.0 * a_), lgb = log10(1.0 * b_);
  double lglga = log10(lga), lglgb = log10(lgb);
  double lg2 = log10(2.0);

  return (f1_ * lg2 + lglga + eps >= f2_ * lg2  + lglgb);
}
int main() {
  // freopen("1.txt", "r", stdin);
  std::ios::sync_with_stdio(0), std::cin.tie(0);
  int T; std::cin >> T;
  while (T --) {
    std::cin >> n;
    for (int i = 1; i <= n; ++ i) std::cin >> a[i];
    for (int i = 1; i <= n; ++ i) f[i] = 0;

    ans = 0;
    for (int i = 2; i <= n; ++ i) {
      if (notsmaller(a[i], 0, a[i - 1], f[i - 1])) continue;
      for (LL l = 1, r = 1e10; l <= r; ) {
        LL mid = (l + r) >> 1ll;
        if (notsmaller(a[i], mid, a[i - 1], f[i - 1])) {
          f[i] = mid;
          r = mid - 1;
        } else {
          l = mid + 1;
        }
      }
      if (!f[i]) {
        ans = -1;
        break;
      }
      ans += f[i];
    }
    std::cout << ans << "\n";
  }
  return 0;
}
