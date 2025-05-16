#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int a,b;
    cin>>a>>b;
    if(a==1&&b==0)
    {
        cout<<"Yes";
    }
    else if(a==0&&b==1)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Invalid";
    }
    return 0;
}