#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
ll dp[200000];
int main() 
{
    int a,b,x,y;
    memset(dp,0,sizeof(dp));
    cin>>a>>b>>x>>y;
    ll i=1;
    ll maxn=0;
    while(x>0||y>0)
    {
        dp[i]=max(abs(dp[i-1]+b),abs(dp[i-1]+a));
        if(abs(dp[i-1]+b-100)>abs(dp[i-1]+a-100))
        {
            x--;
        }
        else if(abs(dp[i-1]+b-100)==abs(dp[i-1]+a-100))
        {

            if(x>y)
            {
                x--;
            }
            else
            {
                y--;
            }
        }
        else
        {
            y--;
        }
        maxn=max(maxn,dp[i]);
        if(dp[i]>100)
        {
            if(dp[i]-100>100-dp[i-1])
            {
                maxn=dp[i-1];
            }
            else
            {
                maxn=dp[i];
            }
            break;
        }
        // cout<<"dp"<<dp[i]<<"minn: "<<maxn<<" x:"<<x<<" y:"<<y<<endl;
        i++;
    }
    cout<<abs(maxn-100);
    return 0;
}