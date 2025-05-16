#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

    int a[105][105][105];
    int sum[105][105][105];
signed main() 
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    memset(a,0,sizeof(a));
    memset(sum,0,sizeof(sum));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int q=1;q<=n;q++)
            {
                cin>>a[i][j][q];
                sum[i][j][q] = sum[i][j-1][q]+sum[i][j][q-1]-sum[i][j-1][q-1]+a[i][j][q];
            }
        }
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int sum=0;
        int x1,x2,y1,y2,z1,z2;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        cout<<sum[x2][y2][z2]-sum[x1][y1][z1]<<"\n";
    }
    return 0;
}