#include <iostream>
using namespace std;
int main()
{
	char c;
	cin>>c;
	
	if(c=='/')
	{
		cout<<"Div";
	}
	else if(c=='*')
	{
		cout<<"Mul";
	}
	else if(c=='+')
	{
		cout<<"Add";
	}
	else if(c=='-')
	{
		cout<<"Sub";
	}
	else if(c=='%')
	{
		cout<<"Mod";
	}else{
		cout<<"error";
	}
	return 0;
}
