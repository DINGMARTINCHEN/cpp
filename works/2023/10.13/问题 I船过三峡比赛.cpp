#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[q], c[q];
    for (int i = 0; i < q; i++)
    {
        cin >> b[i] >> c[i];
    }
    for (int i = 0; i < q; i++)
    {
        int sum = 0;
        for (int j = b[i] - 1; j <= c[i] - 1; j++)
        {
            sum += a[j];
        }
        cout << sum << endl;
    }
}