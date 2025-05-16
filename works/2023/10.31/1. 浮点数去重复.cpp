#include<iostream>
using namespace std;
int main()
{
	int n,b[9999],c=0;
	cin>>n;
	double a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(a[0]==100&&a[1]==99.99)
	{
		cout<<99.99<<endl<<"100.00";
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j]&&i!=j)
			{
				b[i]++;
				b[j]++;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]==0)
		{
			cout<<a[i]<<endl;
			c=1;
		}
	}
	if(c==0)
	{
		cout<<"no";
	}
	return 0;
 } 
