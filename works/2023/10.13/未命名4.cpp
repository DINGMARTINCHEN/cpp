#include<iostream>
using namespace std;
int main()
{
	long long n,a[99999],b[99999];
	long long k,sum1;
	long long sum=0;
	cin>>n;
	cin>>k;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<2*k;i++)
	{
		cin>>b[i];
	}
	for(int j=0;j<2*k;j=j+2)
	{
		sum=0;
		for(int q=b[j];q<=b[j+1];q++)
		{
		    sum=sum+a[q-1];
		}
		cout<<sum<<endl;
	}
	return 0;
 }
