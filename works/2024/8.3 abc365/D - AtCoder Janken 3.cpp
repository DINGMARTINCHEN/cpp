#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const int N=2e5+5;
int dp[N][3];//0为石头，1为剪刀，2为布

signed main() 
{
    int n;
    string a;
    cin>>n>>a;
    a='0'+a;
    for(int i=1;i<=n;i++)
    {
        if(a[i]=='R')
        {
            dp[i][0]=max(dp[i-1][1],dp[i-1][2]);
            dp[i][2]=max(dp[i-1][0],dp[i-1][1])+1;
        }    
        else if(a[i]=='S')
        {
            dp[i][0]=max(dp[i-1][1],dp[i-1][2])+1;
            dp[i][1]=max(dp[i-1][0],dp[i-1][2]);
        }  
        else
        {
            dp[i][1]=max(dp[i-1][0],dp[i-1][2])+1;
            dp[i][2]=max(dp[i-1][0],dp[i-1][1]);
        }  
    }
    cout<<max(max(dp[n][0],dp[n][1]),dp[n][2]);
    return 0;
}