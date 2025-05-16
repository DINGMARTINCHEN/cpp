#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() 
{
    int n;
    cin>>n;
    int a[10009];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        sum+=a[i]+a[i-1];
        a[i]=a[i]+a[i-1];
        for(int j=i+1;j<n;j++)
        {
            if(a[j-1]>a[j])
            {
                swap(a[j],a[j-1]);
            }
            else
            {
                break;

            }
        }
    }
    cout<<sum;
    return 0;
}