#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;
    cin>>n>>k;
    int a[n+2][3],maxn[104][k];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
        a[i][0]*=a[i][2];
        a[i][1]*=a[i][2];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            maxn[i][j]=maxn[i-1][j];
            if(j>=a[i][0])
            {
                maxn[i][j] = max(maxn[i-1][j - a[i][0] ]+a[i][1],maxn[i][j]);
            }
            // cout<<i<<" "<<j<<" "<<maxn[i][j]<<endl;
        }
    }
    cout<<maxn[n][k];
}