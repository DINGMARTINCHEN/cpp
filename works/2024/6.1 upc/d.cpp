#include<bits/stdc++.h> 

using namespace std;
const int N=2e5+50;
typedef long long ll;

int n;
ll ans=-1;

int main( )
{
    
   cin>>n;
        for(int i=1;i<n;i++)
    {
        ll temp=n/i;
        ll cnt=1;
        ll k=n%i;
        for(int j=0;j<k;j++) cnt*=temp+1;
        for(int j=k;j<i;j++) cnt*=temp;
        ans=max(ans,cnt);
    }
    cout<<ans;
    
    
}