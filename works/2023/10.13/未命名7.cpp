#include<iostream>
using namespace std;
int main()
{
	long long n,a[9999],b[9999]={0},min=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>min)
		{
			min=a[i];
			b[i]=min;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]==min)
		{
			cout<<i+1;
		}
	}
	return 0;
 } 
