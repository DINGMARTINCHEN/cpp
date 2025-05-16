#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x,f,y;
	cin>>x>>y;
	f=x*x*x+x-log(x);
	
	if(y>f)
	{
		cout<<"upper";//4 5
	}
	else if(y==f)
	{
		cout<<"equal";//1 2
	}
	else
	{
		cout<<"lower";//3
	}

	return 0;
 } 
