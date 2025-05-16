#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    string a;
    cin>>a;
    if(a[0]<='z'&&a[0]>='a')
    {
        cout<<char(a[0]-'a'+'A');
    }
    else
    {
        cout<<a[0];
    }
    for(int i=1;i<a.size();i++)
    {
        cout<<a[i];
    }
    return 0;
}