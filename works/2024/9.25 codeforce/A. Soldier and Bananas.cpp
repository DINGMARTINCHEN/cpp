#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0;
    for(int i=1;i<=w;i++)
    {
        sum+=k*i;
    }
    if(n>sum)
    {
        cout<<0;
    }
    else
    {
        cout<<sum-n;
    }
    
    return 0;
}