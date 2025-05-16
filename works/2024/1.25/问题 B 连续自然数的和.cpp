#include <bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        int sum1 = 0;
        for (int i = j; i < n; i++)
        {

            sum1 += a[i];
            if (sum1 == k)
            {
                sum++;
                break;
            }
            if (sum1 > k)
            {
                break;
            }
        }
    }
    cout << sum;
}