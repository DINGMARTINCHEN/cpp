#include <bits/stdc++.h>
using namespace std;
int main()
{
    int g, n;
    int a[30009];
    cin >> g >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int sum = 0, i = 0, j = n - 1, sum1 = 0;
    while (i < j)
    {
        if (a[i] + a[j] <= g)
        {
            sum++;
            i++;
            j--;
        }
        else
        {
            sum1++;
            j--;
        }
    }
    // cout << sum + sum1;
    cout << n - sum;
}