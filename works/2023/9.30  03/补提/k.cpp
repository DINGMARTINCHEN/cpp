#include <iostream>
using namespace std;
int main()
{
	long long b=0,sum=0;
	int a=1,n,c;
	cin>>c>>n;
	for (int i=1;i<=n;i++)
	{
		b=10*b+1;
		sum=sum+b;
	}
	cout<<c*sum;
	return 0;
}
