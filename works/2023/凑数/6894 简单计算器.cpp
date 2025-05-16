#include <iostream>
using namespace std;
int main()
{
	char z;
	int a,b;
	cin>>a>>b>>z;
	if(z=='/')
	{
		if(b!=0)
		{
			cout<<a/b;
		}
		else
		{
			cout<<"Divided by zero!";
		}
	 } 
	else if(z=='-')
	{
		cout<<a-b;
	 } 
	else if(z=='+')
	{
		cout<<a+b;
	 } 
	else if(z=='*')
	{
		cout<<a*b;
	 }
	 else
	 {
	 	cout<<"Invalid operator!";
	 }
	 return 0;
}
