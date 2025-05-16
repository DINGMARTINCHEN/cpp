#include <iostream>
using namespace std;
int main()
{
	long long x,n,a[8],sum=0;
	cin>>x>>n;
	a[1]=a[2]=a[3]=a[4]=a[5]=250;
	a[6]=a[7]=0;
	for(int i=x;i<x+n;i++)
	{
		if(i%7==0)
		{
			sum+=0;
		}
		else
		{
			sum+=a[i%7];
		}
	}
	cout<<sum;
	return 0;
}
