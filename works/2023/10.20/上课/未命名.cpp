#include<iostream> 
using namespace std;
int main()
{
	int *p,a[10]={1,2,3,4,5,6,7,8,9,10};
//	cout<<a<<endl;
//	cout<<&a;
	p=&a[0];
	for(int i=0;i<10;i++)
	{
		cout<<a+i<<endl;
	}
	for(int i=0;i<10;i++)
	{
		cout<<*(a+i)<<endl;
	}
	for(p=a;p<a+10;p++)
	{
		cout<<*p<<" ";
	}
}
