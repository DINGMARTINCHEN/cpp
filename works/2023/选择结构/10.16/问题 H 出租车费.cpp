#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(b==1)
	{
		if(a<=3)
		{
			cout<<9;
		}
		if(a>3&&a<=6)
		{
			cout<<fixed<<setprecision(2)<<(a-3)*1.5+9;
		}
		if(a>6)
		{
			cout<<fixed<<setprecision(2)<<(a-6)*2.25+3*1.5+9;
		}
	}
	else
	{
		if(a<=3)
		{
			cout<<9;
		}
		if(a>3&&a<=6)
		{
			cout<<fixed<<setprecision(2)<<(a-3)*1.75+9;
		}
		if(a>6)
		{
			cout<<fixed<<setprecision(2)<<(a-6)*2.5+3*1.75+9;
		}
	}
	return 0; 
 } 
