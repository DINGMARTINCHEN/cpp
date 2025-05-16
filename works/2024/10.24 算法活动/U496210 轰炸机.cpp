#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int h,w,n;
    cin>>h>>w>>n;
    map<int,int>x,y;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        x[a[i]]++;
        y[b[i]]++;
    }
    int xmaxn=0,ymaxn=0;
    for(auto iter=x.begin();iter!=x.end();iter++)
    {
        xmaxn=max(iter->second,xmaxn);
    }
    for(auto iter=y.begin();iter!=y.end();iter++)
    {
        ymaxn=max(iter->second,ymaxn);
    }
    // int xflag,yflag;
    // for(int i=1;i<=h;i++)
    // {
    //     if(xmaxn<x[i])
    //     {
    //         xmaxn=x[i];
    //         xflag=i;
    //     }
    // }
    // for(int i=1;i<w;i++)
    // {
    //     if(ymaxn<y[i])
    //     {
    //         ymaxn=y[i];
    //         yflag=i;
    //     }
    // }
    cout<<ymaxn+xmaxn-1;
    return 0;
}