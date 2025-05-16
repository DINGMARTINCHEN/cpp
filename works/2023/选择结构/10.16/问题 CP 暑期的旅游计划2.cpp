#include<iostream>
using namespace std;
int main ()
{
	int a,b=0,sum=0;
	for(int i=0;i<3;i++)
	{
		cin>>a;
		sum=sum+a;
	}
	if(sum>=270)
	{
		cout<<"beijing";
	}
	else
	{
		cout<<"nanjing";
	}
	return 0;
 } 
