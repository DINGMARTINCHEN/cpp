#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long long n,a,sum=0;
	cin>>n;
	a=n;
	while(n)
	{
		sum=n%10+sum;
		n=(n-n%10)/10;
	}
	if(a%sum==0)
	{
		cout<<"Y";
		return 0;
	}
	cout<<"N";
	return 0;
 } 
