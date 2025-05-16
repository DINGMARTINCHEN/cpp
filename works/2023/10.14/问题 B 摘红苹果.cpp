#include <iostream>
using namespace std;
int main()
{
	int a[9999],c[9999];
	int n,m,sum=0;
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
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(c[i]<a[j])
			{
				sum++;
				c[i]=99999;			}
		}
	}
	cout<<m-sum+2;
	return 0;
}
