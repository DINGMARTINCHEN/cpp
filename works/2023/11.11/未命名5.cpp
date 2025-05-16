#include <iostream>
using namespace std;
int main()
{
	long long n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		long long a,b;
		cin>>a>>b;
		if(a+b<=50)
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
