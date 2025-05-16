#include<iostream>
using namespace std;
int main()
{
	long long n,k,a[99999],sum1=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=i;j<n;j++)
	    {
	    	sum+=a[j];
	    	if(sum%k==0)
        	{
    	    	sum1++;
		    }
    	}
	}
	cout<<sum1;
	return 0;
 } 
