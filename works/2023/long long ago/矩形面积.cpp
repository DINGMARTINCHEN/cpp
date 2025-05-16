#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
double a,b,c,d,e,f,g,h,x1,y1,y2;
cin>>a>>b>>c>>d>>e>>f>>g>>h;
x1=sqrt(pow((a-c),2)+pow((b-d),2));
y1=sqrt(pow((a-e),2)+pow((b-f),2));
y2=sqrt(pow((a-g),2)+pow((b-h),2));
if(x1>y1){swap(x1,y1);}
if(x1>y2){swap(x1,y2); }
if(y1>y2){swap(y1,y2);}
cout<<fixed<<setprecision(2)<<x1*y1;
	return 0;
}
