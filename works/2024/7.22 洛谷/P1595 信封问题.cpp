#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    ll n;
    cin>>n;
    ll d[30];
    d[0]=1;d[1]=0;
    for(int i=2;i<=n;i++)
    {
        d[i]=(i-1)*(d[i-1]+d[i-2]);
    }
    cout<<d[n];
    return 0;
}