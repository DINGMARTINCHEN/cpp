#include<iostream>
using namespace std;
int main()
{
	long long n,a[99999],b[99999];
	long long k,sum1;
	long long sum=0;
	cin>>n;	cin>>k;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<3*k;i++)
	{
		cin>>b[i];
	}
	for(int j=0;j<3*k;j=j+3)
	{
		sum=0;
		for(int q=b[j];q<=b[j+1];q++)
		{
		    a[q-1]+=b[j+2];
		}
	}
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
 }
