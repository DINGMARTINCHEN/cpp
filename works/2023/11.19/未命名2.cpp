#include <iostream>
using namespace std;
int main()
{
	long long int a,b,c=10;
	cin>>a>>b;
	if(a>b)
	{
		swap(a,b);
	}
	long long int d=a*b;
	while(c)
	{
		c=a%b;
		a=b;
		b=c;
	}
	cout<<d/a;
	return 0;
}
