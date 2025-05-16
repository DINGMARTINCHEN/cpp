#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int hour1,min1,hour2,min2,all,hour3,min3;
	char x,y,z;
	cin>>hour1>>x>>min1>>hour2>>z>>min2;
	all=60*hour2+min2-60*hour1-min1;
	hour3=all/60;
	min3=all%60;
	cout<<setw(2)<<setfill('0')<<hour3<<":"<<setw(2)<<setfill('0')<<min3;
	return 0;
} 
