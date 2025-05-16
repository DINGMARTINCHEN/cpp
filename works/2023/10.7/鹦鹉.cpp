#include <iostream>
#include<iomanip>
#include<cmath> 
using namespace std;
int main()
{
	long long x1,y1,x2,y2,x,y,a;
	cin>>x1>>y1>>x2>>y2;
	x=abs(x1-x2);
	y=abs(y1-y2);
	bool d=false;
	if(x>y)
	{
		a=x;
		x=y;
		y=a;
	}
	a=0;
	int c=0;
	c=sprt(x);
	for(int i=x;i>1;i--)
	{
		if(x%i==0&&y%i==0)
		{
			a++;
		}
    }
cout<<a;
	return 0;
 } 
