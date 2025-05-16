#include<iostream>
using namespace std;
int main()
{
	int n,a[99][99],max=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(max==a[i][j])
			{
				cout<<i+1<<" "<<j+1;
				return 0;
			}
		}
	}
	return 0;
 } 
