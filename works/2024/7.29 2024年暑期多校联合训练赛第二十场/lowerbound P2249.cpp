#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<k;i++)
    {
        ll b;
        cin>>b;
        ll ans=lower_bound(a,a+n,b)-a;//���ش��ڵ���b�ĵ�һ�����ĵ�ַ�����Լ�ȥa
        if(b!=a[ans])
        {
            cout<<"-1 ";
        }
        else
        {
            cout<<ans+1<<" ";
        }
    }
    return 0;
}