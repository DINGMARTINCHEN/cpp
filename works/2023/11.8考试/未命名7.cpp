#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char a;
	int b;
	cin>>a>>b;
	a=tolower(a);
//	cout<<char(a+b);
//	cout<<char('a'+(a+b)%26);
if(int(a+b)<=int('z'))
{
	cout<<char(a+b);
}
else
{
	cout<<char(+a+b-26);
}
	return 0;
 } 
