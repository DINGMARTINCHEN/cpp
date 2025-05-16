#include<iostream>
#include <iomanip>
using namespace std;
int main ()
{
	double a;
	cin>>a;
	if(a<=10)
	{
		cout<<fixed<<setprecision(2)<<2.5;
	}
	else
	{
		cout<<fixed<<setprecision(2)<<(a-10)*1.5+10*1.98;
	}
	return 0;
 } 
