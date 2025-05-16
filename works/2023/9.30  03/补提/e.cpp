#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b=0;
	cin>>a;
	if(a<0)
	{
		a=-a;
		cout<<"-";
	}
	while(a!=0)
	{
		b=b*10+a%10;
		a=a/10;
	}
	cout<<b;
	return 0;
}
