#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

bool cmp(int a,int b)
{
    return a>b;
}
signed main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    int sum=0;
    while(a[1]!=0)
    {
        a[0]--;
        a[1]--;
        sort(a,a+n,cmp);
        sum++;
    }
    cout<<sum<<endl;
    return 0;
}