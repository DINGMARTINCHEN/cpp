#include <iostream>
using namespace std;
int main()
{
	int a,n,b,sum=1;
	int max=sum;
	cin>>n;
	cin>>a;
	for (int i=1;i<n;i++)
	{
		cin>>b;
		if(b<=a)
		{
			sum=1;
		}
		if(b>a)
		{
			sum++;
			if(sum>max)
			{
				max=sum;
			}
		}
		a=b;
	}
	cout<<max;
	return 0;
}
