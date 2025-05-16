#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a<6)
	{
		cout<<a-12;
	}
	if(a>=6&&a<15)
	{
		cout<<3*a-1;
	}
	if(a>=15)
	{
		cout<<5*a+9;
	}
	return 0; 
 } 
