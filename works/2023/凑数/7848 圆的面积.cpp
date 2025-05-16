#include<iostream>
#include <iomanip>
double pi=3.14159265358979323;
using namespace std;
int main()
{
	double a;
	cin>>a;
	cout<<fixed<<setprecision(7)<<pi*a*a;
	return 0; 
 } 
