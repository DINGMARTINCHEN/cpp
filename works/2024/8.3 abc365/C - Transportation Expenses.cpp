#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const int N=2e5+5;

int n,m;
int a[N];

bool check(int mid)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=min(a[i],mid);
    }
    if(sum<=m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void find()
{
    int l=0,r=m;
    while(l<r)
    {
        int mid=(l+r+1)/2;
        if(check(mid))
        {
            l=mid;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<l;
}

signed main() 
{
    cin>>n>>m;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum<=m)
    {
        cout<<"infinite";
    }
    else
    {
        find();
    }
    return 0;
}