#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const int N=5e5+100;
int a[N],b[N];
 
signed main() 
{
    int n;
    cin>>n;
    int max1=0,max2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        max1=max(a[i],max1);
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        max2=max(b[i],max2);
    }
    cout<<max1+max2;
    return 0;
}