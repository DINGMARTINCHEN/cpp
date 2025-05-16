#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

void solve()
{
    string a;
    cin>>a;
    if(a.size()==3)
    {
        if(a[0]=='1'&&a[1]=='0'&&a[2]<='9'&&a[2]>='2')
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
    if(a.size()==4)
    {
        int c=a[3]-'0'+(a[2]-'0')*10;
        if(a[0]=='1'&&a[1]=='0'&&c>=10)
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
    return ;
}

signed main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}