#include <bits/stdc++.h>
using namespace std;
using LL = long long;
 
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    auto ns = [&](int i) {
        int sz = 1;
        for (int j = 0; j < i; j++) {
            sz *= 3;
        }
        return sz;
    };
    int sz = ns(n);
    auto solve = [&](auto solve, int i, int j, int n) -> char {
        if (n == 0)
            return '#';
        int small = ns(n - 1);
        int x = i / small, y = j / small;
        if (x == 1 && y == 1) {
            return '.';
        } else
            return solve(solve, i % small, j % small, n - 1);
    };
    for (int i = 0; i < sz; i++) {
        for (int j = 0; j < sz; j++) {
            cout << solve(solve, i, j, n);
        }
        cout << '\n';
    }
 
    return 0;
}
 