#include <iostream>
using namespace std;
int main()
{
	long long a,b,c;
	cin>>a>>b;
	if(b>a)
	{
		swap(a,b);
	}
	for(int i=b;i;i--)
	{
		if(a%i==0&&b%i==0)
		{
			c=i;
		}
		break;
}
cout<<c;
	return 0;
}
