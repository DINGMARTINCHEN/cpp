#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	if(n>=90)
	{
		cout<<"Excellent";
	}
	if(n>=80&&n<90)
	{
		cout<<"Good";
	}
	if(n>=60&&n<80)
	{
		cout<<"Pass";
	}
	if(n<60)
	{
		cout<<"Fail";
	}
	return 0;
 } 
