#include<iostream>
using namespace std;
int main()
{
	long long n,a,min=10001,j;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(min>a)
		{
			min=a;
			j=i;
		}
	}
	cout<<min<<" "<<j+1;
	return 0;
 } 
