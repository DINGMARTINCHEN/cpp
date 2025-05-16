#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    string a;
    cin>>a;
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i]-'0';
    }
    if(sum%9==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}