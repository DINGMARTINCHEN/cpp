#include<iostream>
using namespace std;
int main()
{
	long long int n,a[9999],k;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	 } 
	for(int i=0;i<n-1;i++)
	{
		k=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				k=1;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	 } 
 } 
