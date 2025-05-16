#include <iostream>
#include <string.h>
using namespace std;
int main()
{
int n,min=9999,a[9999];
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
for(int i=0;i<n;i++)
{
if(a[i-1]>=a[i]&&a[i+1]>=a[i])
	{
		if(min>=a[i])
		{
			min=a[i];
		}
	}
}
cout<<min;
	return 0;
}
