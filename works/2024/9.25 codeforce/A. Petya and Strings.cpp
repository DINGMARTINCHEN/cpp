#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        a[i]=toupper(a[i]);
    }
    for(int i=0;i<b.size();i++)
    {
        b[i]=toupper(b[i]);
    }
    if(a>b)
    {
        cout<<1;
    }
    else if(a==b)
    {
        cout<<0;
    }
    else
    {
        cout<<-1;
    }

    return 0;
}