#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int a,b,c,d=1,e;
	cin>>a>>b>>c;
	d=pow(a,b);
	e=d%c;
	cout<<e;
	return 0;
}
