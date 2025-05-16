#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a,max=-32767,min=32768;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(max<a)
		{
			max=a;
		}
		if(min>a)
		{
			min=a;
		}
	}
	cout<<max-min;
	return 0;
 } 
