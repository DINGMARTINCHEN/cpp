#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    string a;
    cin>>a;
    int len=a.size();
    if(a[len-3]=='s'&&a[len-2]=='a'&&a[len-1]=='n')
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}