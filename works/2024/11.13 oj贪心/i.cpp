#include <bits/stdc++.h>
#define int long long

#define x first
#define y second

using namespace std;

int cnt,p[1007];
pair<int,int>a[1007];

signed main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        int k=0,mx=0;
        for(int j=1;j<=cnt;j++)
        {
            if(p[j]>a[i].y)
            {
                continue;
            }
            if(mx<p[j])
            {
                k=j;
                mx=p[j];
            }
        }
        if(k==0)
        {
            cnt++;
            p[cnt]=a[i].y;
        }
        else
        {
            p[k]=a[i].y;
        }
    }
    cout<<cnt;
    return 0;
}