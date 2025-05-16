#include <iostream>
using namespace std;
int main()
{
	long long n,a[9999];
	cin>>n;
	a[1]=a[2]=1;
	for(int i=3;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
		a[i]%=10000; 
	}
	cout<<a[n]%10000;
}
