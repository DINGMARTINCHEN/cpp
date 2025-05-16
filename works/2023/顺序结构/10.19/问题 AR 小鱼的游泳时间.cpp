#include<iostream>
using namespace std;
int main()
{
	int h1,h2,m1,m2,all,hour,min;
	cin>>h1>>m1>>h2>>m2;
	all=(h2-h1)*60+m2-m1;
	min=all%60;
	hour=all/60;
	cout<<hour<<' '<<min;
	return 0;
 } 
