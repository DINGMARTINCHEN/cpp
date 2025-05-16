#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int k=0;k<n;k++)
	{
		bool flag=true;
	int a[9][9];
	int sum=0;
	for(int i=0;i<9;i++)
	{
		sum=0;
		for(int j=0;j<9;j++)
		{
			cin>>a[i][j];
			sum+=a[i][j];
		}
		if(sum!=45)
		{
			flag=false;
		}
	}
	sum=0;
	if(flag==false)
	{
		printf("0");
		return 0;
	}
	printf("1");
		if(k<n-1)
		{
			printf("\n");
		}
	}
}
