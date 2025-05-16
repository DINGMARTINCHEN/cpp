#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=0,n,a[10000]={0},d;
	a[0]=6;
	a[1]=2;
	a[2]=5;
	a[3]=5;
	a[4]=4;
	a[5]=5;
	a[6]=6;
	a[7]=3;
	a[8]=7;
	a[9]=6;
	cin>>n;
	n-=4;
	if(n<=0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	for(int i=10;i<=998;i++)
	{
		d=i;
		while(d>=1)
		{
			a[i]+=a[d%10];
			d/=10;
		}
	}
	for(int i=0;i<=998;i++)
	for(int j=0;j<=998;j++)
	{
		if(a[i]+a[j]+a[i+j]==n&&a[i+j]!=0)
		{
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
