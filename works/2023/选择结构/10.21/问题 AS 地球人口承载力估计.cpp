#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x,a,y,v,b;
	cin>>x>>a>>y>>b;
	cout<<fixed<<setprecision(2)<<(b*y-a*x)*1.0/((b-a)*1.0);
	return 0;
 } 
