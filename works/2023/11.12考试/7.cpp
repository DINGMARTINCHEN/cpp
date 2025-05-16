#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double n,a[999],max=-32767,min=32768;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(min>a[i])
		{
			min=a[i];
		}
		if(max<a[i])
		{
			max=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<floor(((a[i]-min)/(max-min))*100)<<" ";
	}
}
