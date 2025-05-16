#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	double n,a[999];
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int i=0;i<n;i++)
	{
		cout<<fixed<<setprecision(3)<<a[i]<<" ";
	}
	return 0;
 } 
