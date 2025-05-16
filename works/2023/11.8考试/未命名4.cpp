#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a;
	cin>>a;
	if(a<100)
	{
		cout<<"Walk";
	}
	else if(a==100)
	{
		cout<<"All";
	}
	else
	{
		cout<<"Bike";
	}
	return 0;
 } 
