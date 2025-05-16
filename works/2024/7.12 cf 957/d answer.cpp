#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7;
char a[N] = {};
int main()
    {
        int t;
        cin >> t;
        for (int o = 1; o <= t; o++)
        {
            long long n, m, k, x = 0;
            memset(a, '\0', sizeof(a));
            cin >> n >> m >> k;
            for (int i = 1; i <= n; i++)
            {
                cin >> a[i];
            }
            bool flag = 1;
            for (int i = 1; i <= n + 1 && flag; i++)
            {
                if (i == n + 1 || a[i] == 'L')
                {   
                    int y = i - x;
                    if (y <= m)
                    {
                        x = i;
                }
                else if (y > m && y <= m + k)
                {
                    for (int j = x + m; j < i; j++)
                    {
                        if (a[j] == 'C')
                        {
                            flag = 0;
                        }
                    }
                    x = i;
                    k -= y - m;
                }
                else
                {
                    flag = 0;
                }
            }
        }
        if (flag == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}