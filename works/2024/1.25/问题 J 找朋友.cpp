#include <bits/stdc++.h>
using namespace std;
map<string, int> fri;
int main()
{
    int n;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        fri[a]++;
    }
    string b[100000];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        fri[b[i]]++;
    }
    int ma = max(n, m);
    for (int i = 0; i < ma; i++)
    {
        if (fri[b[i]] == 2)
        {
            cout << b[i] << endl;
        }
    }
}