#include<iostream>
using namespace std;
int main()
{
	int a[9999],n,sum1=0,sum2=0;
	cin>>n;
	cin>>a[0];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		if(a[i]-a[i-1]<=0)
		{
			sum1++;
		}
		if(a[i]-a[i-1]>=0)
		{
			sum2++;
		}
	}
	if(sum1==n-1||sum2==n-1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
 } 
