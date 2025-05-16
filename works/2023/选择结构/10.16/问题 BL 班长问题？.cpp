#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	for(int i=1;i<=3;i++)
	{
		int a;
		cin>>a;
		if(a>n)
		{
			n=a;
		}
	}
	cout<<n;
	return 0;
 } 
