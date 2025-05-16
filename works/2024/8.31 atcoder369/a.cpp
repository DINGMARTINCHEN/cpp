#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<1;
        return 0;
    }
    if(abs(a-b)%2==0)
    {
        cout<<3;
    }
    else 
    {
        cout<<2;

    }
    return 0;
}