#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m,a,min1=9999,b,min2=9999;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(min1>a)
		{
			min1=a;
		}
	}
	for(int i=0;i<m;i++)
	{
		cin>>b;
		if(min2>b)
		{
			min2=b;
		}
	}
	cout<<min1+min2;
	return 0;
 } 
