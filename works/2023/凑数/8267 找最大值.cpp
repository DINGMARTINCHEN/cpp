#include<iostream>
using namespace std;
int main()
{
	int a[9999],sum=0,b;
	for(int i=0;;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		{
			b=i;
			break;
		}
	}
	for(int i=0;i<=b;i++)
	{
		for(int j=0;j<=b;j++)
		{
			if(a[i]==2*a[j]&&a[i]!=0&&a[j]!=0)
			{
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
