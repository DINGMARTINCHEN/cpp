#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x=0,y=0,z=0;
	cin>>n>>m;
	bool a[n+1];
	memset(a,true,sizeof(a));
	while(z!=n)
	{
		y++;
		if(y==n+1) y=1;
		if(a[y]) x++;
		if(x==m)
		{
			x=0;
			cout<<y<<' ';
			a[y]=false;
			z++;
		}
	 } 
	return 0;
}

/*用通项公式求解约瑟夫问题  F（N，M）=（F（N-1，M）+M）%N
#include<stdio.h>
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!=-1)
	{
		int p=0;
		for(int i=2;i<=n;i++)
			p=(p+m)%i;
		printf("%d\n",p+1);
	}
	return 0;
}
*/
