#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

signed main() 
{
    int a3[11];
    a3[0]=1;
    for(int i=1;i<=10;i++)
    {
        a3[i]=a3[i-1]*3;
    }
    int n;
    cin>>n;
    int a[25],sum=0;
    while(n)
    {
        for(int i=10;i>=0;i--)
        {
            if(n>=a3[i])
            {
                n-=a3[i];
                a[sum]=i;
                sum++;
                break;
            }
        }
    }
    cout<<sum<<endl;
    for(int i=0;i<sum;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}