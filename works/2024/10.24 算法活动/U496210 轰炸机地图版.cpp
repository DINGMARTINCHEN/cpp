#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N=3e5+10;

int h,w,n;
int a[N][N];
map<int,int>x,y;

signed main() 
{
    cin>>h>>w>>n;
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++)
    {
        int x1,y1;
        cin>>x1>>y1;
        x[x1]++;
        y[y1]++;
        a[x1][y1]++;
    }
    int maxn=0;
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            int temp=x[i]+y[j];
            if(a[i][j]==1)
            {
                temp--;
            }
            maxn=max(maxn,temp);
        }
    }
    cout<<maxn;
    return 0;
}