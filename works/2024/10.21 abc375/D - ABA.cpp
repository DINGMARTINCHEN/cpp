#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    string s;
    int sum1[30];
    int sum2[30];
    cin >> s;
    int ans = 0;
    for (int i=0;i<s.size();i++) 
    {
        int c = s[i] - 'A';
        ans += (i-1) * sum1[c] - sum2[c];
        sum1[c] += 1;
        sum2[c] += i;
    }

    cout << ans << endl;
    return 0;
}