#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x1,x2,y1,y2,r1,r2;
	double d;
	cin>>x1>>y1>>r1>>x2>>y2>>r2;
	d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	if(d>r1+r2)
	{
		cout<<"No";
	}
	if(d==r1+r2)
	{
		cout<<"Yes";
	}
	if(d<r1+r2)
	{
		if(r1==r2-d||r2==r1-d)
		{
			cout<<"Yes";
		}
		else
		{
			cout<<"No";
		}
	}
 } 
