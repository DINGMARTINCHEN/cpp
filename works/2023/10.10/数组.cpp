#include<iostream>
using namespace std;
int main()
{
	double a[10]={0},b=0,c=0;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	} 
	for(int i=0;i<10;i++)
	{
		b=b+a[i];
	} 
	c=b/10;
	for(int i=0;i<10;i++)
	{
		if(a[i]<c)
		{
			cout<<a[i];
		}
	} 
	return 0;
 } 
