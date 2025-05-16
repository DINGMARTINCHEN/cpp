#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

void process()
{
    string a;
    cin>>a;
    int len=a.size();
    if(a.size()<=10)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<a[0]<<len-2<<a[len-1]<<endl;
    }
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        process();
    }
    return 0;
}