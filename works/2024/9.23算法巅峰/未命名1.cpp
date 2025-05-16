#include<bits/stdc++.h>
using namespace std;

int a[100000],sum=0;
bool flag=0;

	
int main()
{
	char k;
	cin>>k;
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
		cout<<"FALSE";
	}
	else
	{
		cout<<"TRUE";
	}
}
/*
00000

[0,2,3,1,1,4]
[4,1,2,0,3,0,1,1]
*/









