#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a,b;
	cin>>a>>b;
	cout<<fixed<<setprecision(3)<<(b*100.0)/(a*1.0)<<'%';
	return 0;
 } 
