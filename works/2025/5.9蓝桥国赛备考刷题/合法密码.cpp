#include<bits/stdc++.h>
#define long long
const int N=1005;
using namespace std;

signed main()
{
	int n;
	cin>>n;
	int w[N];
	map<int,int>fa;
	for(int i=0;i<n;i++)
	{
		cin>>w[i];
	}
	for(int i=0;i<n-1;i++)
	{
		int f,s;
		cin>>f>>s;
		fa[s]=f;
	}
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		for(int j=1;j<=n;j++)
		{
			if(fa[j]==i)
			{
				sum+=i;
			}
		 } 
	}
	return 0;
}
