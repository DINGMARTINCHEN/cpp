#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    ll n,t,p;
    cin>>n>>t>>p;
    ll l[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>l[i];
        if(l[i]>=p)
        {
            sum++;
            if(sum==t)
            {
                cout<<0;
                return 0;
            }
        }
    }
    sort(l,l+n);
    if(l[n-p]==l[n-p-1])
    {
        cout<<0;
        return 0;
    }
    cout<<10-l[n-p];
    return 0;
}