#include <iostream>
using namespace std;
int main()
{
    long long a[99999],n,b=0;
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i]; 
		a[i]=a[i]-1;
		if(a[i]==0)
		{
		}
		else
		{
			break;
		}
	}
	for(int i=0;i<=n-1;i++)
	{
		if(a[i]!=0)
		{
			b=1;
		}
	}
	if(b==1)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
    return 0;
}
