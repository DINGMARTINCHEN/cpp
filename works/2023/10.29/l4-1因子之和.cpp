#include<iostream>
using namespace std;
int main()
{
	int n;
	long long a[99999];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long m,sum=0;
	cin>>m;
	for(int i=0;i<n;i++)
	{
		if(m%a[i]==0)
		{
			sum+=a[i];
		}
	}
	cout<<sum;
	return 0;
 } 
