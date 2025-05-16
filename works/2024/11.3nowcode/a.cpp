#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
    cout<<max(a[0]+a[1],a[2]);
    return 0;
}