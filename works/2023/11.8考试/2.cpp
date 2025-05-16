#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long long int a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;
	cin>>a1>>b1>>c1>>a2>>b2>>c2>>a3>>b3>>c3;
	if(a1>a2)
	{
	swap(a1,a2);
	swap(b1,b2);
	swap(c1,c2);
	}
	if(a1==a2&&b1==b2&&c1>c2)
	{
	swap(a1,a2);
	swap(b1,b2);
	swap(c1,c2);
	}
	if(a1==a2&&b1>b2)
	{
	swap(a1,a2);
	swap(b1,b2);
	swap(c1,c2);
	}
	d1=365*a1+30*b1+c1;
	d2=365*a2+30*b2+c2;
	d3=365*a3+30*b3+c3;
	if(d3<=d2&&d3>=d1)
	{
		cout<<"Yes";
		return 0;
	}
	cout<<"No";
	return 0;
 } 
