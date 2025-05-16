#include <iostream>
using namespace std;
int main()
{
	long long a[99999],n,m,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<n;i++)
	{
		if(m%a[i]==0)
		{
			sum=sum+a[i];
		}
	}
	cout<<sum;
	return 0;
}
