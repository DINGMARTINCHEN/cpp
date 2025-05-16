#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int minn=a[n-1]-a[0];
    for(int i=0;i<=k;i++)
    {
        minn=min(minn,a[n-1-k+i]-a[i]);
    }
    cout<<minn;
}