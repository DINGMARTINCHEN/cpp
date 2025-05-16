#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a<=3)
	{
		cout<<14;
	}
	else
	{
		cout<<fixed<<setprecision(0)<<(a-3)*2.3+13+1;
	}
	return 0; 
 } 
