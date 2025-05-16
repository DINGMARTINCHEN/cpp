#include<iostream>
using namespace std;
int main()
{
	long long n;
	int sum=0;
	cin>>n;
	for (int i=0;i<=n;i++)
	{
		for(int j=0;j<=n/5;j++)
		{
			for(int y=0;y<=n/10;y++)
			{
				if(i+5*j+10*y==n)
				{
					sum=sum+1;
				}
			}
		}
	}
	cout<<sum;
	return 0;
 } 
