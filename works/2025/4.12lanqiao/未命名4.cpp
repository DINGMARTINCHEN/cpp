#include<bits/stdc++.h>
#define int long long 
const int N=1e9+5;
using namespace std;

map<int,int>mp;

void pro(int a)
{
	for(int i=3;i<=100;i++)
	{
		int sum=0;
		for(int j=a;j<=a+i;j++)
		{
			sum+=j;
		}
//		cout<<sum<<endl;
		mp[sum]=1;
	}
}

signed main()
{
	for(int i=-10;i<=N;i++)
	{
		pro(i);
	}
	 
	for(int i=0;i<=N;i++)
	{
		if(mp[i]==1)
		{
			cout<<i<<',';
		}
	}
	return 0;
}
