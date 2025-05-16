#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int n,len,m;
int a[50005];

bool check(int mid)
{
    int sum=0;
    int i=0,now=0;
    while(i<n+1)
    {
        i++;
        if(a[i]-a[now]<mid)
        {
            sum++;
        }
        else
        {
            now=i;
        }
    }
    if(sum>m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

signed main() 
{
    cin>>len>>n>>m;
    int minn=1e5;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        minn=min(minn,a[i]);
    }
    a[0]=0,a[n+1]=len;
    if(n==0)
    {
        cout<<len;
    }
    int l=0,r=a[n-1];
    while (l < r)//最小值的最大
    {
        int mid =(l+r+1)/2;	//(l+r+1)/2
        if (check(mid))  l = mid;
        else r = mid - 1;
    }
    cout<<l;
    return 0;
}