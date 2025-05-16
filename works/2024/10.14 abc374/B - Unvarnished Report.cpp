#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    string a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0;
        return 0;
    }
    for(int i=0;i<max(a.size(),b.size());i++)
    {
        if(a[i]!=b[i])
        {
            cout<<i+1;
            return 0;
        }
    }
    return 0;
}
/*
5
2 3 5 10 12
*/