#include <bits/stdc++.h>
#define int long long
using namespace std;

pair<int,int>a[10007];

signed main() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].second>>a[i].first;
    }
    sort(a+1,a+1+n);//pair排序时，first是第一关键字
    int cur=a[1].first,cnt=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i].second<=cur)
        {
            continue;
        }
        cur=a[i].first,cnt++;
    }
    cout<<cnt;
    return 0;
}