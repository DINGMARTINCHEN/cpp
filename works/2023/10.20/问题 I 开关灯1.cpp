#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	const int b=n;
	long long a[b+1]={0};
	for(int j=1;j<=n;j++)
	{
	for(int i=1;i<=n;i++)
	{
		if(i%j==0)
		{
			if(a[i]==0)
			{
				a[i]=1;
			}
			else
			{
				a[i]=0;
			}
		}
	}
	}
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
