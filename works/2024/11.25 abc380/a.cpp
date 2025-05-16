#include <bits/stdc++.h>
using namespace std;
using LL = long long;
 
int main(void) {
    string s;
    cin >> s;
    bool ok = true;
    for (int i = 1; i <= 3; ++i)
        ok &= count(s.begin(), s.end(), i + '0') == i;
    if (ok)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
 
    return 0;
}
 