#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j+2*i==n)
			{
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
