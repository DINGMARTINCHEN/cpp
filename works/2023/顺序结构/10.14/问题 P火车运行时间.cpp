#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,all,min,hour,min1,min2,hour1,hour2;
	cin>>a>>b;
	min1=a%100;
	min2=b%100;
	hour1=(a-min1)/100;
	hour2=(b-min2)/100;
	all=min2-min1+(hour2-hour1)*60;
	min=all%60;
	hour=all/60;
	cout<<hour<<':'<<setw(2)<<setfill('0')<<min;
}
