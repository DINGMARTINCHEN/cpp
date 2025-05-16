#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
struct dot
{
    ll x, c;
};

bool cmp(dot a, dot b)
{
    return a.x < b.x;
}
void sol()
{
    ll n, m;
    cin >> n >> m;
    vector<dot> arr(m + 1);
    ll sum = 0;

    for (int i = 1; i <= m; i++)
        cin >> arr[i].x;

    for (int i = 1; i <= m; i++)
    {
        cin >> arr[i].c;
        sum += arr[i].c;
    }

    // 判断是否合法
    if (sum != n)
    {
        cout << -1 << endl;
        return;
    }
    sort(arr.begin() + 1, arr.end(), cmp);
    // 计算前缀和
    ll now_tot = 0;
    for (int i = 1; i <= m; i++)
    {
        if (now_tot < arr[i].x - 1) // 如果出现前缀和小于x-1，说明前面的石子覆盖不到x-1
        {
            cout << -1 << endl;
            return;
        }
        now_tot += arr[i].c;
    }
    // 计算
    ll ans = n * (0 + n - 1) / 2; // 假设n个石子都在1位置,代价就是0+1+2+3+...+n-1
    for (int i = 1; i <= m; i++)
        ans -= (arr[i].x - 1) * arr[i].c; // 减去实际位置*石子数量

    cout << ans << endl;
}
int main()
{
    sol();
    return 0;
}
