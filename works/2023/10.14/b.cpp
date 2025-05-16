#include <iostream>
using namespace std;
int main()
{
	int a[9999],c[9999];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>c[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			if(c[i]>c[j])
			{
				swap(c[i],c[j]);
			}
		}	
	}
	int sum=0,sum1=0;
	for(int i=0;i<n;i++)
	{
		if(c[i]>=a[i])
		{
			sum++;
			a[i]=9999;
		}
		if(c[i]>=a[i+1])
		{
			sum1++;
			a[i+1]=9999;
		}
	}
	cout<<sum+sum1;
	return 0;
}
