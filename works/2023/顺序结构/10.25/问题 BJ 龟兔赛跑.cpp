#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x,y,t,t1;
	cin>>x>>y>>t;
	t1=t*x/(y-x);
	cout<<fixed<<setprecision(0)<<t1*y-0.5;
	return 0;
}
