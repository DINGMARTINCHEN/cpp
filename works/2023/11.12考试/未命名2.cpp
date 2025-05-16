#include<iostream>
using namespace std;
int main()
{
	int a[999],sum=0;
	int n;
	cin>>n;
	a[1]=a[2]=1;
	for(int i=3;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=1;i<=n;i++)
	{
		sum+=a[i];
	}
	cout<<sum;
	return 0;
 } 
