#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int n,d;
    string a;
    cin>>n>>d>>a;
    for(int i=n-1;d>0&&i>=0;i--)
    {
        if(a[i]=='@')
        {
            a[i]='.';
            d--;
        }
    }
    cout<<a;
    return 0;
}