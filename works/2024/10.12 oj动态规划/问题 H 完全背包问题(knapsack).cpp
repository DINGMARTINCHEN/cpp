#include<bits/stdc++.h>
using namespace std;
const int N=37,M=207;
int n,m,w[N],c[N],f[N][M];
int main()
{
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i]>>c[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			for(int k=0;k*w[i]<=j;k++){
				f[i][j]=max(f[i-1][j-k*w[i]]+k*c[i],f[i-1][j]);
			}
		}
	}
	printf("max=%d",f[n][m]);
	return 0;
}