#include<iostream>
using namespace std;
int main()
{
	long long all,day,month,year;
	cin>>all;
	day=all/86400%30+1;
	month=all/2592000%12+1;
	year=all/31104000;
	cout<<year+2011<<" "<<month<<" "<<day;
	return 0;
 } 
