#include<iostream>
using namespace std;
int main()
{
	long long int n,a[999],t,s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>t;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==t)
		{
			cout<<i+1;
			return 0;
		}
	}
	return 0;
}

