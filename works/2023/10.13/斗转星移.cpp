#include<iostream>
using namespace std;
int main()
{
	long long  n,m,a[99999];
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=m;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=0;i<m;i++)
	{
		cout<<a[i]<<" ";
	}
 } 
