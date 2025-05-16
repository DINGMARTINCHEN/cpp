#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,c,s,a1,b1,c1;
	cin>>a1>>b1>>c1;
	a=sqrt(a1);
	b=sqrt(b1);
	c=sqrt(c1);
	s=sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;
	cout<<fixed<<setprecision(2)<<s;
	return 0;
 } 
