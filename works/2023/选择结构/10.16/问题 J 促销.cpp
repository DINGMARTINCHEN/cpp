#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	if(n<500)
	{
		cout<<fixed<<setprecision(2)<<n;
	 } 
	else if(n>=500&&n<1000)
	{
		cout<<fixed<<setprecision(2)<<0.95*n;
	}
	else if(n>=1000&&n<3000)
	{
		cout<<fixed<<setprecision(2)<<0.9*n;
	}
	else if(n>=3000&&n<5000)
	{
		cout<<fixed<<setprecision(2)<<0.85*n;
	}
	else
	{
	    cout<<fixed<<setprecision(2)<<0.8*n;
	}
	return 0;
 } 
