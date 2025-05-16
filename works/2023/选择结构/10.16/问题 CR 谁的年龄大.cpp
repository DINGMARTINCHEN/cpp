#include<iostream>
using namespace std;
int main ()
{
	int a,ge,shi;
	cin>>a;
	ge=a%10;
	shi=a/10;
	if(ge>shi)
	{
		cout<<ge<<shi;
	}
	else
	{
		cout<<shi<<ge;
	}
	return 0;
 } 
