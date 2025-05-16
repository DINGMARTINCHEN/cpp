#include <bits/stdc++.h>
#define int long long
using namespace std;

void process() {
    int l, r,ans=0;
    cin >> l >> r;
    if(l%2==1)
    {
        l--;
    }
    cout << ans+(r - l+1) / 4 << endl;
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