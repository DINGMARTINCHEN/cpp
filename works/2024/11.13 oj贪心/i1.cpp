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
    int t=0;
    sort(a+1,a+n+1);
    for(int i=n;i>=1;i--)
    {
        int k=0;
        while(k<t&&p[k]<a[i].y)
        {
            k++;
        }
        if(k>=t)t++;
        p[k]=a[i].y;
    }
    cout<<cnt;
    return 0;
}