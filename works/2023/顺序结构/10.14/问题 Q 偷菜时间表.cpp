#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,c,d,all,min,hour;
	char z;
	cin>>a>>z>>b>>c>>z>>d;
	all=b+d;
	min=all%60;
	hour=(all/60+a+c)%24;
	cout << setw(2) << setfill('0') << hour<<':'<<setw(2) << setfill('0') << min;
	return 0; 
 } 
