#include <iostream>
using namespace std;
int main()
{
	double a,b,sum1=0,sum2=0;
	cin>>a>>b;
	sum1+=a*a;
	sum1+=b*b;
	cin>>a>>b;
	sum2+=a*a;
	sum2+=b*b;
	cout<<sum1<<endl<<sum2;
}
