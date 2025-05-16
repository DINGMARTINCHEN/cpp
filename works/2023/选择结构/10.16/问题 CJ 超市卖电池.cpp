#include<iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int a;
	cin>>a;
	if(a<10)
	{
		cout<<fixed<<setprecision(1)<<a*2;
	}
	else
	{
		cout<<fixed<<setprecision(1)<<a*1.8;
	}
	return 0;
 } 
