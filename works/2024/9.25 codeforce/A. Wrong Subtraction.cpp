#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        if(n%10==0)
        {
            n/=10;
        }
        else
        {
            n--;
        }
    }
    cout<<n;
    return 0;
}