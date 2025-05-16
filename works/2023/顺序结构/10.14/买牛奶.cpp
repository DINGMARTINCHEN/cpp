#include <iostream>
using namespace std;
int main()
{
	double a,b=0;
	cin>>a;
	for(int i=1;i;i++)
	{
		if(2*i>=3*a)
		{
			b=i;
			break;
		}
	}
	cout<<b;
	return 0;
}
