#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[1005][1005];

void process()
{
    memset(a,0,sizeof(a));
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int minn=1;
        for(int j=0;j<2*n-i;j++)
        {
            minn=min(minn,a[1+j][i+j]);
        }
        if(minn<0)
        {
            sum-=minn;
        }
    }
    for(int i=2;i<=n;i++)
    {
        int minn=1;
        for(int j=0;j<2*n-i;j++)
        {
            minn=min(minn,a[i+j][1+j]);
        }
        if(minn<0)
        {
            sum-=minn;
        }
    }
    cout<<sum<<endl;
}
/*

 1  1 -1 -1  3
-3  1  4  4 -4  4
-1 -1  3  0 -5  5
 4  5  3 -3 -1  1
 3  1 -3 -1  5  3
                3
                3

*/

signed main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        process();
    }
    return 0;
}
