#include <iostream>
using namespace std;
int main()
{
	long long a[999999],n;
	cin>>n;
	cin>>a[0];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		while(a[i]>a[i-1])
		{
			swap(a[i],a[i-1]); 
		}
	}
	for(int i=0;i<n-1;i++)
	{
		cout<<a[i];
	}
	return 0;
}
