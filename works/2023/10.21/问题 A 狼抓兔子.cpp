#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int a[10];
	for(int i=1;i<=10;i++)
	{
		a[i]=i;
	}
	int k=1;
	for(int i=1;i<=1000;i+=k)
	{
		a[i%10]=0;
		k++;
	}
	for(int i=1;i<10;i++)
	{
		if(a[i]!=0)
		{
			cout<<a[i]<<endl;
		}
	}
	return 0;
 } 
