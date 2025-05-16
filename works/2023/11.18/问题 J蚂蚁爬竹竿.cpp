#include <iostream>
using namespace std;
int main()
{
	long long int n,l,max=0,a;
	cin>>n;
	cin>>l;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a<=l/2&&max<a)
		{
			max=a;
		}
		if(a>l/2&&max<(l-a))
		{
			max=l-a;
		}
	}
	cout<<max;
}
