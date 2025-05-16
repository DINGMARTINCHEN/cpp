#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long a=1;
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		{
			a=a*2;
		}
		cout<<a<<endl;
		a=1;
	}
	return 0;
}
