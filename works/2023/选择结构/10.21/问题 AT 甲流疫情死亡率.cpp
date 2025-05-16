#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,a;
	cin>>a>>n;
	cout<<fixed<<setprecision(3)<<(n*100.0)/(a*1.0)<<"%";
	return 0;
 } 
