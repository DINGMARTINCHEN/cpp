#include <iostream>
using namespace std;
int main()
{
	int n,a[9999],j[9999]={0},o[9999]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			o[i]=a[i];
		}
		else
		{
			j[i]=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(o[i]!=0)
		{
			cout<<o[i]<<" ";
		}
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		if(j[i]!=0)
		{
			cout<<j[i]<<" ";
		}
	}
}
