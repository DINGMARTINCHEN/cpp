#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int x;
    cin>>x;
    int num = x / 5 + 1;
    if(x % 5 == 0)
        num--;
    cout<<num;
    return 0;

}