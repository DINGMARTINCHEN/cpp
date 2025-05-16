#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	n=abs(n);
	if(n==1||n==0)
	{
		cout<<"No";
		return 0;
	}
	if(n==2)
	{
		cout<<"Yes";
		return 0;
	}
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
 } 
