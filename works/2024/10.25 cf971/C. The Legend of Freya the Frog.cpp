#include <bits/stdc++.h>
#define int long long
using namespace std;

void process()
{
    int a,b,c;
    cin>>a>>b>>c;
    int l = (b + c - 1) / c;
    int r = (a + c - 1) / c;
    int ans = max(l, r) * 2 - (l < r);
    cout << ans << endl;
	return;
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        process();
    }
    return 0;
}

