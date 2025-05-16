#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    int flag=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==0&&flag==-1)
        {
            flag=i;
        }
    }
    if(flag-1<k&&flag!=-1)
    {
        cout<<flag-1;
        return 0;
    }
    int sum=0;
    for(int i=k;i<=n;i++)
    {
        if(a[i]==a[i+1])
        {
            sum++;
        }
        else
        {
            break;
        }
    }
    cout<<sum+k;
    return 0;
}