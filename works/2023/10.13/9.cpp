#include<iostream>
using namespace std;
int main()
{
	long long  a[101]={0},b=100,c,d;
	for(int i=0;i<b;i++)
	{
		a[i]=(i+1)*2+1;
	}
	for(int i=0;i<b;i++)
	{
		d=a[i];
		c=d/2;
		a[i]=c;
		a[i+1]=a[i+1]+c;
	}
	a[0]=a[99]/2+a[0];
	for(int i=0;i<b;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
 } 
