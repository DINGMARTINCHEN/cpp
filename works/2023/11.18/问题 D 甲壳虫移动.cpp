#include <iostream>
using namespace std;
int main()
{
	int sum=0,n;
	cin>>n;
	for(int i=0;i<n;i++) 
	{
		for(int j=0;j<n;j++)
		{
			for(int z=0;z<n;z++)
			{
				if(i+2*j+3*z==n)
				{
					sum++;
				}
			}
		}
	}
	cout<<sum;
	return 0;
}
