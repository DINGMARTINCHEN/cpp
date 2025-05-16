#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int n,k;
    cin>>n>>k;
    int sum=0,ans=0;
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        if(a=='O')
        {
            sum++;
            if(sum==k)
            {
                sum=0;
                ans++;
            }
        }
        else
        {
            sum=0;
        }
    }
    cout<<ans;
    return 0;
}