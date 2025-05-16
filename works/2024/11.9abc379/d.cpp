#include <bits/stdc++.h>
#define int long long
using namespace std;
void sol()
{
    int q;
    cin >> q;
    int x, m;
    int time = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (q--)
    {
        cin >> x;
        if (x != 1)
        {
            cin >> m;
            if (x == 2)
                // time += m;
                time++;
            else
            {
                int ans = 0;
                while (!pq.empty() && time - pq.top() >= m)
                {
                    ++ans;
                    pq.pop();
                }
                cout << ans << '\n';
            }
        }
        else
            pq.push(time);
    }
}
signed main()
{
    sol();
    return 0;
}
 