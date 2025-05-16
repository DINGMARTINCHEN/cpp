#include <iostream>
using namespace std;
int main()
{
	long long l,m,a[999],c[9999]={0},b[999],sum=0;
	cin>>l>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=a[i];j<=b[i];j++)
		{
			c[j]=1;
		}
	}
	for(int i=0;i<=l;i++)
	{
		if(c[i]==0)
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
