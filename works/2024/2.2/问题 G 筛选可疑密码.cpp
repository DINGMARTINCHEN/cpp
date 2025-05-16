#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    cin >> n;
    string b[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a[0] + a[3] > a[2] + a[1])
        {
            sum++;
            b[sum - 1] = a;
        }
        }
    cout << sum << endl;
    for (int i = 0; i < sum; i++)
    {
        cout << b[i] << " ";
    }
}