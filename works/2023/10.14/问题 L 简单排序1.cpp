#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[9999];
	int n,m,c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	cin>>m;
	for(int i=0;i<n;i++)
	{
		if(m==a[i])
		c=i;
	}
	cout<<c+1;
	return 0;
}
