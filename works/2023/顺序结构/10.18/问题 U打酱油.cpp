#include<iostream>
using namespace std;
int main()
{
	long long n,max=0,sum,a[5]={0};
	cin>>n;
	n=n/10;
	if(n%5==0)//��5���� 
	{
		a[0]=n/5*7;
	} 
	else if(n%5==3)//��5����3 
	{
		a[1]=n/5*7+4;
	} 
	else if(n%5==1||n%5==2)//��5����1��2 
	{
		a[2]=n/5*7+n-n/5*5;
	} 
	else if(n%5==4)//��5����4
	{
		a[3]=n/5*7+n-n/5*5+1;
	} 
	else if(n%3==0)//��3���� 
	{
		a[4]=n/3*4;
	}
    for(int i=0;i<=4;i++)
    {
    	if(max<a[i])
    	{
    		max=a[i];
		}
	}
	cout<<max;
	return 0;
 } 
