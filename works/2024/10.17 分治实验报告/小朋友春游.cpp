#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=1e4+5;

signed main()
{
    int n;
    cin>>n;
    int px[n+5],py[n+5];//原坐标
    int x[n+5],y[n+5];//排序后坐标
    for(int i=0;i<n;i++)
    {
        cin>>px[i]>>py[i];
        x[i]=px[i];
        y[i]=py[i];
    }
    sort(x,x+n);//排序
    sort(y,y+n);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=abs(x[n/2]-px[i])+abs(y[n/2]-py[i]);//所选地点就是每个小朋友的x坐标排序后的中间值和y坐标排序后的中间值，所指向的坐标
    }
    cout<<ans;
}
