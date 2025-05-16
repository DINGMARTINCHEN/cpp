#include <bits/stdc++.h>
#define int long long
using namespace std;

void dsc()
{
    int n;
    cin>>n;
    // cout<<n<<" ";
    for(int i=n;i>=1;i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        dsc();
    }
    return 0;
}