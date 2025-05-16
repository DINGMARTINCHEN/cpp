#include <iostream>
using namespace std;
int main()
{
	long long a[999];
	int n;
	cin>>n;
	a[1]=a[2]=a[3]=1;
	for(int i=4;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-3];
	}
	for(int i=1;i<=n;i++)
	{
		
		cout<<a[i]<<" ";
	}
	return 0;
 } 
