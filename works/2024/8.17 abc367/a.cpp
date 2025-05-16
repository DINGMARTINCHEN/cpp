#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    bool flag=0;
    if(b>c)
    {
        c+=24;
        flag=1;
    }
    if(flag==0)//同一天
    {
        if(a>b&&a<c)
        {
            cout<<"No";
        }
        else
        {
            cout<<"Yes";
        }

    }
    else//不是同一天
    {
        a+=24;
        if(a>b&&a<c)
        {
            cout<<"No";
        }
        else
        {
            cout<<"Yes";
        }
    }
    return 0;
}