#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<fixed<<setprecision(2)<<1.0/(1.0/a+1.0/b);
	return 0;
}
