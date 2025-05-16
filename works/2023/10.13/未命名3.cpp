#include <iostream>
using namespace std;
int main()
{
	int a,month;
	cin>>a>>month;
	if(month==2)
	{
		if(a%4==0&&a%100!=0||a%400==0)
		{
			cout<<29;
		}
		else
		{
			cout<<28;
		}
	}
	else if(month==1||month==3||month==5||month==7||month==8||month==9||month==10||month==12)
	{
		cout<<31;
	}
	else
	{
		cout<<30;
	}
	return 0;
}
