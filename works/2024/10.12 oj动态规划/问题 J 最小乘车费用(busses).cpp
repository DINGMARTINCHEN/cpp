#include<iostream>
#include<cstring>
using namespace std;
int w[17],c[17];
int dp[107];
int main()
{
	memset(dp,0x3f,sizeof dp);
	dp[0]=0;
	int n;
	for(int i=1;i<=10;i++)
	{
		cin>>c[i];
		w[i]=i;
	}
	cin>>n;
	for(int i=1;i<=10;i++)
	{
		for(int j=w[i];j<=n;j++){
			dp[j]=min(dp[j],dp[j-w[i]]+c[i]);
		}
	}
	cout<<dp[n];
	return 0;
}
 