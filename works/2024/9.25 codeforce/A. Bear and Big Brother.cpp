#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int a,b,sum=0;
    cin>>a>>b;
    while(a<=b)
    {
        a*=3;
        b*=2;
        sum++;
    }
    cout<<sum;
    return 0;
}