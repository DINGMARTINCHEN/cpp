#include <iostream>
using namespace std;
int main()
{
	long long a,b,c,d;
	cin>>a>>b;
	if(b>a)
	{
		c=a;
		a=b;
		b=c;
	}
	for(int i=b;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		{
			d=i;
			break;
		}
    }
    cout<<d<<" "<<a*b/d;
	return 0;
}
