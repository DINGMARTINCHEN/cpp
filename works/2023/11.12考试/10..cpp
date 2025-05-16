#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long long a;
	cin>>a;
	for(int i=0;a;i++)
	{
    	cout<<a%10;
		a=(a-a%10)/10;
	 } 
	return 0;
 } 
