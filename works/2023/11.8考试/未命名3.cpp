#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a;
	cin>>a;
	if(a>=0&&a<5)
	{
		cout<<fixed<<setprecision(3)<<(2.5-a*1.0)*1.0;
	}
	if(a>=5&&a<10)
	{
		cout<<fixed<<setprecision(3)<<(2-1.5*(a-3)*(a-3))*1.0;
	}
	if(a>=10&&a<20) 
	{
		cout<<fixed<<setprecision(3)<<(2*a*1.0-1.5)*1.0;
	}
	return 0;
 } 
