#include<iostream>
using namespace std;
int main()
{
	long long int a,t,a1,b,c[9999]={0};
	cin>>t>>a1;
	for(int i=1;i<=a1;i++)
	{
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
			c[i]=1;
		}
	}
	int sum=0;
	for(int i=0;i<=t;i++)
	{
		if(c[i]==0)
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
