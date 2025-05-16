#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	long long int n,a[99999],b[99999],k=0;
	cin>>n;
	if(n==1)
	{
		k=1;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i>1)
		{
			b[i-1]=abs(a[i]-a[i-1]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				swap(b[j],b[j+1]);
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(b[i]-b[i-1]==b[i+1]-b[i])
		{
			k=1;
		}
	}
	if(k=1)
	{
		cout<<"Jolly";
	}
	else
	{
		cout<<"Not jolly";
	}
	return 0;
 } 
