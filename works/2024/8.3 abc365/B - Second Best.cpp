#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

struct aaaa
{
    int num;int data;
}a[105];

bool cmp(aaaa aa,aaaa bb)
{
    return aa.data>bb.data;
}

signed main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].data;
        a[i].num=i+1;
    }
    sort(a,a+n,cmp);
    cout<<a[1].num;
    return 0;
}