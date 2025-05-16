#include<iostream>
using namespace std;
int Fnum(int n,int x)
{
	int i,j;
	int m,sum=1;
	for(i=2;i<=x;i++)
	{
		if(n%i==0)
			sum+=i;
	}
	return sum;
}
int main()
{
	int n,m;
	int x,y;
	cin>>n>>m;
	x=Fnum(n,n/2);
	y=Fnum(m,m/2);
	if(x==m&&y==n)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;
}
