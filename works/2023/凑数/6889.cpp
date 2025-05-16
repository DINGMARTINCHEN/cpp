#include<iostream>
using namespace std;
int main()
{
	int n,a[9999];
	n=10;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]); 
			 } 
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
 } 
