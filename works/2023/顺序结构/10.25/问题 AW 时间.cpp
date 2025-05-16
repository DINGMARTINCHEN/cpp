#include <iostream>
using namespace std;
int main()
{
	int h1,h2,m1,m2,s1,s2,all;
	cin>>h1>>m1>>s1>>h2>>m2>>s2;
	all=s2-s1+(m2-m1)*60+(h2-h1)*3600;
	cout<<all;
	return 0;
 } 
