#include <iostream>
using namespace std;
int main()
{
	int a1,b1,a2,b2,all;
	cin>>a1>>b1>>a2>>b2;
	all=b2-b1+(a2-a1)*60;
	cout<<all/60<<" "<<all-all/60*60;
	return 0;
}
