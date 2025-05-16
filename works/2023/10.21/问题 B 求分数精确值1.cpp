#include<iostream>
using namespace std;
int main()
{
	double a;
	int b;
	cin>>a>>b;
	cout<<a/b<<".";
	for(int i=1;i<=100;i++)
	{
		a=a*10;
		cout<<a%b<<endl<<"A"<<a<<endl;
		a=a%b;
	}
}
