#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	cout<<a;
	do
	{
		if(a%2){a++;cout<<"->"<<a;}
		if(a%2==0){a=a/2;cout<<"->"<<a;}
	}while(a&&a!=1);
	return 0;
}
