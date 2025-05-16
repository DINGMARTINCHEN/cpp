#include <bits/stdc++.h>
using namespace std;
const int N=2007;
int f[N][N];
char s1[N],s2[N];
int main()
{
	scanf("%s%s",s1,s2);
	int m=strlen(s1),n=strlen(s2);
	for(int i=1;i<=m;++i)
	f[i][0]=i;
	for(int i=1;i<=n;++i)
	f[0][i]=i;
	for(int i=1;i<=m;++i)
	for(int j=1;j<=n;j++)
	if(s1[i-1]==s2[j-1])
	f[i][j]=f[i-1][j-1];
	else
	f[i][j]=min(min(f[i-1][j],f[i][j-1]),f[i-1][j-1])+1;
	printf("%d\n",f[m][n]);
	return 0;
}