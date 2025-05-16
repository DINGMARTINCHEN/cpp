#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int *p;
	int n;
	cin>>n;
	p=a;
	for(p=a;p<a+n;p++)
	{
		cin>>*p;
	}
	for(p=a+n-1;p>=a;p--)
	{
		cout<<*p;
	}
	return 0; 
 } 
