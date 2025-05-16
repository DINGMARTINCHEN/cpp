#include<iostream>
using namespace std;
int main()
{
	int n,a[9999],sum=0,b=0,b1=0;
	cin>>n;
	cin>>a[1];
	for(int i=2;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]-a[i-1]>=10||a[i-1]-a[i]>=10)
		{
			sum++;
			b++;
		 } 
		else
		{
			b=0;
		}
		if(b>=2)
		{
			b1++;
		}
	}
	cout<<sum<<" "<<b1;
 } 
