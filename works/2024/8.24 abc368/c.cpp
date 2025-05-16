#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t=1,sum=0;
    int pos=0;
    while(a[n-1]>0)
    {
        if(t%3!=0)
        {
            a[pos]--;
        }
        else
        {
            a[pos]-=3;
        }
        t++;
        if(a[pos]<=0)
        {
            cout<<endl<<sum<<"====="<<endl;
            pos++;
        }
        sum++;
    }
    cout<<sum;
    return 0;
}