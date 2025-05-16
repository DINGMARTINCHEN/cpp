#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int x, k;
    auto check = [&](int mid)
    {
        int lnum = x - mid, rnum = x + mid;
        int lpos, rpos;
        if (lnum > a.back())
            return false;
        else
            lpos = lower_bound(a.begin(), a.end(), lnum) - a.begin();
        if (rnum > a.back())
            rpos = n - 1;
        else
            rpos = upper_bound(a.begin(), a.end(), rnum) - a.begin();
        if (rpos == 0)
            return false;
        if (a[rpos] > rnum && rpos > 0)
            rpos--;
        return rpos - lpos + 1 >= k;
    };

    while (q--)
    {
        cin >> x >> k;
        if (n == 1)
        {
            cout << abs(x - a[0]) << '\n';
            continue;
        }
        int l = 0, r = 4e9;
        while (l < r)
        {
            int mid = (l + r) >> 1;
            if (check(mid))
                r = mid;
            else
                l = mid + 1;
        }
        cout << l << '\n';
    }
    return 0;
}