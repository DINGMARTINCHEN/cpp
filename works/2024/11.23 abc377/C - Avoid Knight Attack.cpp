#include <bits/stdc++.h>
using namespace std;
using LL = long long;
 
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    set<array<int, 2>> a;
    int  dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int  dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        a.insert({x, y});
        for (int j = 0; j < 8; j++) {
            int nx = x + dx[j];
            int ny = y + dy[j];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n) {
                a.insert({nx, ny});
            }
        }
    }
    LL ans = 1ll * n * n - a.size();
    cout << ans << '\n';
 
    return 0;
}