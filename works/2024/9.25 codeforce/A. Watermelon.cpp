#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int a;
    cin>>a;
    if((a-2)%2==0&&a!=2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}