#include <iostream>
using namespace std;
int main()
{
	long long  h,m,s,all;
	cin>>all;
	s=(all%3600)%60;
	m=(all%3600)/60;
	h=all/3600;
	cout<<h<<":"<<m<<":"<<s;
	return 0;
}
