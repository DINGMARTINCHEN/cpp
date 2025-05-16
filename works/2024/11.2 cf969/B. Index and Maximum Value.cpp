#include <bits/stdc++.h>
#define int long long
using namespace std;

void dsc() {
    int n,ma=0,m;
    cin >> n>>m;
    for (int i = 1,x; i <= n;i++){
        cin >> x;
        ma = max(ma, x);
    }
    for (int i = 1; i<= m;i++){
        char op;
        int l, r;
        cin >> op >> l >> r;
        if(ma>=l&&ma<=r){
            if(op=='+')
                ma++;
            else
                ma--;
        }
        cout << ma << ' ';
    }
    cout << endl;
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        dsc();
    }
    return 0;
}