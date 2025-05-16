#include <iostream>
using namespace std;
int main()
{
	long long n,a[9999]={0},k,c,b;
	cin>>n>>k;
	for(int i=0;i<k;i++)
	{
		cin>>b>>c;
		a[b]++;
		a[c]--; 
	}
	for(int i=1;i<n;i++)
	{
		a[i]+=a[i-1];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
 } 
