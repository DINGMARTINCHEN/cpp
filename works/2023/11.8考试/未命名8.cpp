#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
const double PI = acos(-1);
int main()
{
	double a;
	cin>>a;
	cout<<fixed<<setprecision(4)<<2*a<<" ";
	cout<<fixed<<setprecision(4)<<2*PI*a<<" ";
	cout<<fixed<<setprecision(4)<<a*PI*a;
	return 0;
}
