#include<bits/stdc++.h>
using namespace std;

int a[100000],sum=0;
int maxn=0;

void dfs(int pos)
{
	maxn=max(maxn,pos);
	if(a[pos]==0)
	{
		return ;
	}
	for(int i=pos+1;i<=a[pos]+pos;i++)
	{
		dfs(i);
	}
}	

int main()
{
	char k;
	cin>>k;
    bool flag=0;
	while(1)
	{
		cin>>a[sum++]>>k;
		if(k==']')
		{
			break;
		}
		if(a[sum-1]==0)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		if(a[0]==0)
		{
			cout<<"FALSE";
			return 0;
		}
		dfs(0);
		if(maxn>=sum-1)
		{
			cout<<"TRUE";
			return 0;
		}
		else
		{
			cout<<"FALSE";
			return 0;
		}
	}
	else
	{
		cout<<"TRUE";
	}
}
/*
00000

[0,2,3,1,1,4]
[4,1,2,1,0,0,1,1]
*/
