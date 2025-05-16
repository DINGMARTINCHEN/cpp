#include <iostream>
using namespace std;
int main()
{
	int h,l,c,r;
	cin>>h>>l;
	c=2*h-l/2;
	r=l/2-h;
	cout<<"rabbit="<<r<<",chicken="<<c;
	return 0;
}
