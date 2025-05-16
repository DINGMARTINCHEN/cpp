#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1;
    }
    else
    {
         cout<<ceil(log(n)/log(2));
    }
   
    return 0;
}