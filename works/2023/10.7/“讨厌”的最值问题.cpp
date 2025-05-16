#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<6)
	{
		cout<<-1<<" "<<-1;
	}
	else if(n%3==0)
	{
		cout<<n/3-1<<" "<<n/3+1;
	} 
	else if(n%3==1)
	{
		cout<<(n-1)/3+2<<" "<<(n-1)/3-1;
	}
	else if(n%3==2)
	{
		cout<<(n-2)/3+2<<" "<<(n-2)/3-1;
	}
	return 0;
}
