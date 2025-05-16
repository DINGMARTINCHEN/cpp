#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int n;
    cin>>n;
    int maxn=0,sum=0;
    cin>>maxn;
    for(int i=1;i<n;i++)
    {
        int a;
        cin>>a;
        if(maxn<a)
        {
            maxn=a;
        }
        else
        {
            sum+=maxn-a;
        }
    }
    cout<<sum;
    return 0;
}