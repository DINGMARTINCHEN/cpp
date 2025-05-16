#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    int sum=0;
    while(n--)
    {
        string a;
        cin>>a;
        if(a[1]=='-')
        {
            sum--;
        }
        else
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}