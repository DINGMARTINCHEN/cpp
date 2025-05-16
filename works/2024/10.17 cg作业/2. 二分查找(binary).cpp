#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b;
    cin>>b;
    int pos1=lower_bound(a,a+n,b)-a;
    int pos2=upper_bound(a,a+n,b)-a;
    if(pos1==pos2)
    {
        cout<<-1;
    }
    else
    {
        cout<<pos1+1;
    }
    return 0;
}