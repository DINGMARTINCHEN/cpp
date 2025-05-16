#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!='.')
        {
            cout<<a[i];
        }
    }
    return 0;
}