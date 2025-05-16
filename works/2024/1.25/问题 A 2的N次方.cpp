#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[9999], i = 0;
    while (cin >> a[i])
    {
        i++;
    }
    for (int j = 0; j < i; j++)
    {

        if (a[j] % 4 == 0)
        {
            cout << 6 << endl;
        }
        if (a[j] % 4 == 1)
        {
            cout << 2 << endl;
        }
        if (a[j] % 4 == 2)
        {
            cout << 4 << endl;
        }
        if (a[j] % 4 == 3)
        {
            cout << 8 << endl;
        }
        if (a[j] == 0)
        {
            cout << 1 << endl;
        }
    }
}