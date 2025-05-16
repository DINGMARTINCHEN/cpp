#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
const ll N=5e5+10;

int main() 
{
    ll n;
    vector<ll>a;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll sum=0;
        ll t,v;
        cin>>t>>v;
        if(t>0)
        {
            for(ll j=0;j<t;j++)
            {
                a.pop_back();
            }
        }
        a.push_back(v);
        // cout<<"a.size():"<<a.size()<<endl;
        for(ll j=0;j<a.size();j++)
        {
            // cout<<j<<"a[j]:"<<a[j]<<endl;
            sum+=(j+1)*a[j];
            sum%=1000000007;
        }
        cout<<sum<<endl;
    }
    return 0;
}
