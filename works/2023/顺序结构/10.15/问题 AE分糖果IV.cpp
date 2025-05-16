#include<iostream>
using namespace std;
int main()
{
    long long  a[6]={0};
    for(int i=1;i<=5;i++)
    {
    	cin>>a[i];
	}
	a[5]=a[5]+a[1]/3;
	a[2]=a[2]+a[1]/3;
	a[1]=a[1]/3;
	for(int i=2;i<=4;i++)
	{
		a[i-1]=a[i-1]+a[i]/3;
		a[i+1]=a[i+1]+a[i]/3;
		a[i]=a[i]/3;
	}
	a[1]=a[1]+a[5]/3;
	a[4]=a[4]+a[5]/3;
	a[5]=a[5]/3;
	for(int i=1;i<=5;i++)
    {
    	cout<<a[i]<<" ";
	}
    return 0;
 } 
