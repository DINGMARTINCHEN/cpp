#include <iostream>
using namespace std;
int main()
{
	double a;
	cin>>a;
	if(a<15)
	{
		cout<<"cold";
	}
	if(a<=25&&a>=15)
	{
		cout<<"home";
	}
	if(a>25)
	{
		cout<<"hot";
	}
	return 0;
}
