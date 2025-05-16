#include<bits/stdc++.h>
using namespace std;
const int MAXN=110;
int f[MAXN][MAXN];
int r[MAXN],c[MAXN],n;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d%d",&r[i],&c[i]);
	memset(f,0,sizeof(f));
	for(int l=2;l<=n;l++)
	for(int i=1;i<=n-l+1;++i)
	{
		int j=i+l-1;
		f[i][j]=1000000000;
		for(int k=i;k<j;k++)
		if(f[i][k]+f[k+1][j]+r[i]*c[k]*c[j]<f[i][j])
		f[i][j]=f[i][k]+f[k+1][j]+r[i]*c[k]*c[j];
	}
	printf("%d\n",f[1][n]);
	return 0;
}